//
//  main.cpp
//  rverse of an array
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void creat (int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for( i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        last->next=t;
        last=t;
    }
}

void dispaly(struct Node *p,int n)
{
    
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
        
    }
   }

void reverse1(struct Node *p,int n)
{
    int k[n];
    int i=0;
    while(p!=NULL)
    {
        k[i++]=p->data;
        p=p->next;
        
    }
    p=first;
    i--;//imporant
    while(p!=NULL)
    {
        
        p->data=k[i--];
        p=p->next;
    }
    
}
void reversingwithsliderpoint(struct Node *m,int n)
{
    struct Node *p=first,*q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}



int main()
{
    int A[]={10,20,30,40};
    creat(A, 4);
    dispaly(first, 4);
    reverse1(first, 4);
    dispaly(first, 4);
    reversingwithsliderpoint(first, 4);
}
