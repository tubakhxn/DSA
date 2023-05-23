#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max];
int top=-1;

void push()
{
    if(top==max-1)
    {
        printf("stack overflow");
    }
    else
    {
        int a;
        printf("enter data: ");
        scanf("%d",&a);
        top++;
        stack[top]=a;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        int a=stack[top];
        top--;
        printf("element popped: %d",a);
    }
}
void display()
{

    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        printf("elements are:");
        for(int i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
    }
}
int main()
{
   int choice;
   while(1){
    printf("ENTER YOUR CHOICE : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
    }
   }
}
