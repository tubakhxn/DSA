//A priority queue is a type of queue that arranges elements based on their priority values
//Elements with higher priority values are typically retrieved before elements with lower priority values.
/*Properties of Priority Queue
1)Every item has a priority associated with it.
2)An element with high priority is dequeued before an element with low priority.
3)If two elements have the same priority, they are served according to their order in the queue.*/


#include<stdio.h>
#include<stdlib.h>
struct node
{
int info,priority; // each node in queue has info and priority of node.
struct node *next; // also Node will keep track of address of next node.
}; //end of structure

struct node *start=NULL; // initialisation


// function to add node in queue according to priority
void insert(int x,int n)
{

struct node *p,*prev;
struct node *newnode;

newnode=(struct node *)malloc(sizeof(struct node)); // This will create node in Dynamic manner.
prev=(struct node *)malloc(sizeof(struct node));

newnode->info=x;// store given input info in new node
newnode->priority=n;// store priority of node
newnode->next=NULL; // store address of next node

//Base Condition
// Checks if Queue is Empty If it is Then It will allot Newnode as Start/First Node
if(start==NULL)
start=newnode;

//Check if Incoming Node Priority is lower than start Node
else if(newnode->priority>start->priority)
{
prev=start;// this will store start node to temporary Node Called as Prev
p=start;

// iterate over nodes till it finds node with less priority
while(p!=NULL && p->priority<=newnode->priority)
{
prev=p;
p=p->next;
}

newnode->next=p;
prev->next=newnode;
}//End of else if

// if incoming Node has highest priority then Make as Start Node and Start Node as Next Node
else
{
newnode->next=start;
start=newnode;
}
} //end of insert

// function to delete to Node From Queue
void delete()
{
//Base Condition
// Checks if Queue is Already Empty
struct node *p;
if(start==NULL)
printf("List is Empty\n");

// delete first Node
else
{
p=start;
start=start->next;
printf("The deleted node is %d\n",p->info);
free(p);
}
} //end of delete
void display()
{
struct node *p;
//Base Condition
// Checks if Queue is Already Empty
if(start==NULL)
printf("List is Empty\n");

// iterate over all node and simultaneously print its data
else
{
p=start;
printf("The elements in the link list are\n");
printf("PRIORITY INFO\n");
while(p!=NULL)
{
printf("%d %d\n",p->priority,p->info);
p=p->next;
}//end of while
}//end of else
} //end of display


// Utility Function
void main()
{
struct node *p;
int x,choice,n;
// User Choice
while(1)
{
printf("Enter your choice:\n1.insert as per priority\n2.delete \n3.display\n4.exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter value to be entered into queue :");
scanf("%d",&x);
printf("Enter priority of the node :");
scanf("%d",&n);
insert(x,n);
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
printf("Thank you\n");
exit(0);

default:
printf("Invalid input\n");
}//end of switch
}
}