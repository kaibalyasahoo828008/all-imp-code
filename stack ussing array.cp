
//
//  main.cpp
//  450
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

struct stack
{
    int size;//to save the size of an array
    int top;//to move the and storing the data value
    int *arr;//to make a dyanamic array
};

void push(stack *l,int x)//to enet the or creating elements
{
  if(l->top==l->size-1)
  {
      cout<<"spaceis not available"<<endl;
  }
    else
    {
        l->top++;
        l->arr[l->top]=x;
    }
    
    
}

void display(stack l)//to display a specific elements
{
    for(int i=0;i<l.size;i++)
    {
        cout<<l.arr[i]<<endl;
        
    }
    
    
    
}

void pop(stack *l,int index)//deleting a specific elements from stack
{
    int ans;
   for(int i=0;i<l->size;i++)
   {
       if(l->arr[i]==index)
       {
           ans=i;
       }
       
   }
   
   
    for(int i=ans+1;i<l->size;i++)
    {
        
        l->arr[i-1]=l->arr[i];
    }
        l->size--;
  
    
}

int peak(stack l,int index)
{
   if(index<0 || index>l.size )
   {
       return -1;
   }
    else
    {
        return l.arr[index];
    }
    
    
}


int StackTop(stack l)
{
    if(l.top==-1)
    {
        return -1;
    }
    else
    {
        return l.arr[l.top];
    }
    
    
}

void EmpTy(stack l)
{
    
    if(l.top==-1)
    {
        cout<<"the stack is empty"<<endl;
    }
     else
     {
         cout<<"the stack is not empty"<<endl;
     }
 
}



void isFull(stack l)
{
    if(l.top==l.size-1)
    {
        cout<<"the stack is full"<<endl;
    }
    else
    {
        cout<<"the stack is not full"<<endl;
    }
    
}

int main()
{
    struct stack l;
    cout<<"ENTER THE SIZE OF AN ARRAY"<<endl;
    cin>>l.size;
    l.arr=new int[l.size];
    l.top=-1;
    for(int i=0;i<l.size;i++)
    {
        int x;
        cin>>x;
        push(&l, x);
        
    
    }
    display(l);
    int index;
    cin>>index;
    pop(&l, index);
    display(l);
    peak(l, 2);
    isFull(l);
    EmpTy(l);
    
    
}
