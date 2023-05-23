#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node* next;
}*new,*temp,*ptr,*head; 
int size=0, n, choice=0, count;
;
int i;
int top=0;
int push, pop;
void insertion(){
    int a;
    if(head==NULL){
        printf("LL is empty ");
    }
    else if (head!=NULL)
    {
        printf("\n Enter the elements from the begining:");
        scanf("%d", &n);
        push=new=a;
        push!=NULL;
        
        for(i=1;size=-1;i--){
            printf("\n Enter the elements");
            scanf("%d", &i);
            printf("\n Elements added successfully.");
            
        }      //recheck this again
            printf("\n Do you want to enter more elements 1.YES 2-NO");
            scanf("%d", &choice);
    }
   
    else{
        printf("EXIT");
    }

}

void insertdeletion(){
    if(head==NULL){
        printf("LL is empty");
    }
    else if (head!=NULL)
      {
        printf("Delete the elements from the position %d", count );
        scanf("%d", &choice);
        top--;     //recheck
    }
  
    else {
        printf("EXIT");
    }

}

void display(){
    if(head==NULL){
        printf("LL is empty");

    }
    else{
        printf("Displaying the elements inserted are %d", count );
        for(int i =top;i=0,i--;);
    }
}
int main(){
    int c=1, n;
    while(c==1){
        printf("\n****************CHOOSE THE FOLLOWING****************\n");
        printf("\nPRESS 1- For inserting elements in the list:");
        printf("\nPRESS 2- For deleting elements from the list:");
        printf("\nPRESS 3-For displaying the elements in the list:");
        printf("\nENTER THE CHOICE HERE:");
        scanf("%d", &n);
    }
    if(n==1){
        printf("You have seleted 1st option");
        insertion();
    }
    else if(n==2){
        printf("You have seleted 2st option");
        insertdeletion();
    }
    else if(n==3){
        printf("You have seleted 3st option");
        display();
    }

    else{
        printf("INVALID CHOICE");
    }

    }

        
    
    

