#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
}*ptr,*new,*temp,*last;
int count=0;
void insertbegin(){
	int n,choice=1;
	while(choice==1){
		new=(struct node *)malloc(sizeof(struct node));
		printf("enter element\n");
		scanf("%d",&n);
		new->data=n;
		new->next=NULL;
		if(new==NULL){
			printf("DMA unncessful\n");
		}
		else{
			printf("DMA successful\n");
			if(count==0){
				last=new;
				last->next=last;
			}else{
				temp=last->next;
				last->next=new;
				new->next=temp;
				
			}
			count++;
		}
		printf("Do you want to add another node in the begining of the linked list (1-Yes 2-No)\n");
		scanf("%d",&choice);
	}
}
void insertend(){
	if(count>0){
		int n,choice=1;
		while(choice==1){
			new=(struct node *)malloc(sizeof(struct node));
		printf("enter element\n");
		scanf("%d",&n);
		new->data=n;
		new->next=NULL;
		if(new==NULL){
			printf("DMA unncessful\n");
		}
		else{
			printf("DMA successful\n");
			if(count==1){
				last->next=new;
				new->next=last;
				last=new;	
			}
			else{
				temp=last->next;
				last->next=new;
				new->next=temp;
				last=new;
			}
			count++;
	}
	printf("Do you want to enter more elements (1-Yes 2-No)\n");
	scanf("%d",&choice);
		}
		
	}else{
		printf("list is empty\nTry inserting elements first\n");
	}
}
void insertmid(){
	int n,choice=1,pos;
	
	while(choice==1){
	if(count>1){
			printf("enter position where element is to inserted\nNOTE : position entered should be >1 and < %d",count);
			scanf("%d",&pos);
				if(pos>1 && pos<count){
		
				new=(struct node *)malloc(sizeof(struct node));
				printf("enter the element\n");
				scanf("%d",&n);
				new->data=n;
				if(new==NULL){
					printf("DMA unccessful\n");
				}
				else{
					int i;
					printf("DMA successful\n");
					for(ptr=last->next,i=1;i<pos-1;ptr=ptr->next,i++);
					temp=ptr->next;
					ptr->next=new;
					new->next=temp;
					
				}
			
			}else{
				printf("Invalid position entered");
		}}
		else{
			printf("Insufficient nodes present\nTry using insert begin or insert end first\n");
		}
			printf("Do you want to insert more nodes in the middle(1-Yes 2-No)\n");
			scanf("%d",&choice);
			}
}
void display(){
	if(count==0){
		printf("list is empty\n");
	}
	else{
		
	printf("Displaying the linked list\nList has %d nodes\n",count);
	ptr=last->next;
	do{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}while(ptr!=last->next);

	}

	}
	
int main(){
	int c=1,n;
	while(c==1){
		printf("Press\n 1 : insert begin\n2 : insert mid\n3 : insert end\n4 : Display\n5 : End the program\n");
		scanf("%d",&n);
		if(n==1){
			printf("you selected 1st option\n");
			insertbegin();
		}
		else if(n==2){
			
			printf("you selected 2nd option\n");
			insertmid();
		}
		else if(n==3){
			printf("you selected 3rd option\n");
			insertend();
		}
		else if(n==4){
			display();
		}
		
		else if(n==5){
			c=2;
		}
		else {
			
			printf("invalid opton selected\n");
		}

		
	}
	}







