

#include <iostream>
using namespace std;
struct Node/* to creat a node containg self reference point and */
{
    int data;
    struct Node *next;/* selef reference pointer class*/
}
*first=NULL;/* gobalt pointer */



void creat(int A[],int n)
{
    int i;/* this variable use to scan throw elements*/
    struct Node *t,*last;/* *t =it is used to creat new node*/
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        last->next=t;
        last=t;
    }
    
}

void display(struct Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<endl;
        display(p->next);
        
        
        
    }
}

/*
int sum1(struct Node *p)
{
    int sum=0;
    while(p!=0)
    {
        sum=sum+p->data;
        
        
        
    }
    return sum;
}*/
/*int sum2(struct Node *p)
{
int sum=0;
    if(p==0)
    {
        return 0;
    }
    else
    {
        sum=sum+p->data;
        return sum2(p->next)+sum;
    }
}
*/
/*int sum3(struct Node *p)
{
    int sum=0;
    if(p)
    {
        sum=sum2(p->next);
        return sum+p->data;
    }
    else
    {
        return x;
    }
}
*/
/*void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
        
    }
}
*/

/*struct Node * search(struct Node *p,int key)
{
    Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            return p;
            
            
        }
        q=p;
        p=p->next;
  
    }

    return NULL;
    
}*/
/*struct Node * search(struct Node *p,int key)
{
    if(p==NULL)
    return NULL;
    if(key==p->data)
    return p;
    return search(p->next,key);
    
 
   

    return NULL;
    
}*/

struct Node* search(Node *p ,int key)
{
    struct Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        
        q=p;
        p=p->next;
        
        
        
        
    }
    
    
    return NULL;
    
}








int main()
{
    int A[]={3,5,7,10,15};
    creat(A,5);
    display(first);
    struct Node *temp;
  temp=search(first,10);
  if(temp!=NULL)
  {
      cout<<"KEY IS FOUND"<<temp->data<<endl;;
  }
  else
  {
      cout<<"KEY IS NOT FOUND"<<endl;
  }
  display(first);
    return 0;
    
    
    
    
    
}
