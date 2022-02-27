
//
//  main.cpp
//  450
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;//to store the data in node
    struct Node *next;//to stor the adress of next node
    
} *top=NULL;
void push(int x)
{
   struct Node *t=new Node;
    if(t==NULL)//to check either the stack is empy or full
    {
        cout<<"the stack is full"<<endl;
    }
    else
    {
        t->data=x;//to insert the value in the data possition
        t->next=top;//to move the pointer
        top=t;
    }
    
    
}

void pop()//for deleting the value
{
    int x=-1;
   struct  Node *t;
    if(top==NULL)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        delete t;
        
        
    }
    cout<<"thr value deleted is"<<x<<endl;
    
    
}
void dispay()//to display the data
{
    struct Node *t=top;
    while(t!=NULL)
    {
        cout<<t->data;
        t=t->next;
    }
}




int main()
{
    push(4);
     push(7);
      push(8); push(3);
       push(3);
        push(6);
    dispay();
    pop();
     dispay();
}
