

//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;
struct Node
{
    char data;//to store the data in node
    struct Node *next;//to stor the adress of next node
    
} *top=NULL;
void push(char x)
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
        
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        delete t;
        
        
    }
    
    
     
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

int isBalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==')')
        {
            if(top==NULL)
            {
                return 1;
            }
                else
                {
            pop();
                }
        }
        
    
      
    }
          dispay();
        if(top==NULL)
        {
            return 1;
        }
         else
         {
             return 0;
         }
        
    
    
}


int main()
{
    char *exp="(()))";
    cout<<isBalanced(exp);
    
}
