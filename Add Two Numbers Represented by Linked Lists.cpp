#include<iostream>
#include<conio.h>
using namespace std;
int c = 0, c1 = 0;
struct node1
{
    node1 *link;
    int data1;
}*head = NULL, *m = NULL, *np1 = NULL, *ptr = NULL;
struct node
{
    node *next;
    int data;
}*start = NULL, *p = NULL, *np = NULL;
void store(int x)
{
    np1 = new node1;
    np1->data1 = x;
    np1->link = NULL;
    if (c == 0)
    {
        head = np1;
        m = head;
        m->link = NULL;
        c++;
    }
    else
    {
        m = head;    
        while (m->link != NULL)
        {
            m = m->link;
        }
        m->link = np1;
        np1->link = NULL;          
    }
}
void keep(int x)
{
    np = new node;
    np->data = x;
    np->next = NULL;
    if (c1 == 0)
    {
        start = np;
        p = start;
        p->next = NULL;
        c1++;
    }
    else
    {
        p = start;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = np;
        np->next = NULL;            
    }
}
void add()
{ 
    int i = 0;
    node1 *t = head;
    node *v = start;
    while (t != NULL)
    {
        if (v == NULL)
        {
            t->data1 = t->data1 + i;
            i = t->data1 / 10;
            t->data1 = t->data1 % 10;
            if (t->link == NULL && i == 1)
            {
                ptr = new node1;
                ptr->data1 = i;
                ptr->link = NULL;
                t->link = ptr;
                t = t->link;
            }
            t = t->link;
            continue;
        }   
        else
        {
            t->data1 = t->data1 + v->data + i;
            i = t->data1 / 10;
            t->data1 = t->data1 % 10;
            if (t->link == NULL && i == 1)
            {
                ptr = new node1;
                ptr->data1 = i;
                ptr->link = NULL;
                t->link = ptr;
                t = t->link;
            }
            t = t->link;
            v = v->next;
        }
    }           
}       
void traverse()
{
    node1 *q = head;
    int c = 0,i = 0;
    while (q != NULL)
    {
        q = q->link;
        c++;
    }
    q = head;
    while (i != c)
    {
        x[c - i - 1] = q->data1;
        i++;
        q = q->link;
    }
    cout<<"Result of addition for two numbers:";
    for (i = 0; i < c; i++)
    {
        cout<<x[i]<<"\t";
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n, x, mod, mod1;
    cout<<"Enter the two numbers"<<endl;
    cin>>n;
    cin>>x;
    if (x > n)
    {
        swap(&x,&n);
    }
    while (n > 0)
    {
        mod = n % 10;
        n = n / 10;
        store(mod);
    }
    while (x > 0)
    {
        mod1 = x % 10;
        x = x / 10;
        keep(mod1);
    }
    add();
    traverse();
    getch();
}