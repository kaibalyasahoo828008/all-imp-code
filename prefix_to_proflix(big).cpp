



#include <iostream>
#include<string.h>
#include <stdlib.h>
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

int pop()//for deleting the value
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
    return x;
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

/*    ******************************************************************************************/
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
                return 0;
            }
                else
                {
            pop();
                }
        }
        
    
      
    }
         
        if(top==NULL)
        {
            return 1;
        }
         else
         {
             return 0;
         }
    
}
/* *********************************************************************************************/
int pre(char x)
{
    if(x=='+' || x=='-')
    {
        return 1;
    }
    else if(x=='*' || x=='/')
    {
            return 3;
    }
    else if(x=='^' )
    {
            return 6;
    }
    else if(x=='(')
    {
            return 7;
    }
    else
    {
            return 0;
    }
}
/* *********************************************************************************************/
int prestac(char x)
{
    if(x=='+' || x=='-')
    {
        return 2;
    }
    else if(x=='*' || x=='/')
    {
            return 4;
    }
    else if(x=='^' )
    {
            return 5;
    }
    else if(x==')')
    {
            return 2;
    }
    else
    {
     return -1;
    }
}
/* *********************************************************************************************/
int isOperand(char x)
{
    
    if(x=='+'|| x=='-'|| x=='*' || x=='/'  || x=='^'|| x=='('|| x==')'|| x=='/')
    {
        return 0;
        
    }
    else
    {
        return 1;
    }
}

/****************************************************************************************************************************************************/

char * InTopost(char *inflix)
{

    char *postflix=new char[strlen(inflix)+2];
    int i=0,j=0;
    while(inflix[i]!='\0')
    {
        if(isOperand(inflix[i]))
        {
           postflix[j++]=inflix[i++];
        }
          
    else
    {
        if(pre(inflix[i])>prestac(top->data))
        {
            push(inflix[i++]);
        }
        else if(pre(inflix[i])==prestac(top->data))
        {
            pop();
            i++;
            
        }
        else
        {
            postflix[j++]=pop();
            
        }
            
            
        }
        
    }

while(top!=NULL)
{
    postflix[j++]=pop();
}
    
    postflix[j]='\0';
    
    
    return postflix;
    
}




int main()
{
    char *inflix="(a+b)*c-d^e^f";
    push('#');
    char *postflix=InTopost(inflix);
   
  cout<<postflix;
 
}


