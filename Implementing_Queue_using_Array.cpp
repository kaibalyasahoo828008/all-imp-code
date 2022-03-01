

//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

struct Queue//to make structure of Queue that containing size of queue,front of queue,rear of queue,and a pointer to make a dynamic array
{
    int size;
    int fornt;
    int rear ;
    int *Q;
};
void enqueue(Queue *q,int x)//it is the function to eneter the value and make a queue.
{
    if(q->rear==q->size-1)
    {
        cout <<"Queue is full"<<endl;
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}

/********************************************************************************************************************************************************/
int dequeue( Queue *q)
{
    int x=-1;
    if(q->fornt==q->rear-1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        q->fornt++;
        x=q->Q[q->fornt];
        
    }
    
    return x;
}
/* *********************************************************************************************/
int Empty(Queue *q)
{
    int x=-1;;
    if(q->fornt==q->rear-1)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        q->fornt++;
        x=q->Q[q->fornt];
    }
    
    return x;
}

void display(  Queue *q)
{
    for(int i=0;i<q->size;i++)
    {
        cout<<q->Q[i];
    }
    
    
}




int main()
{
    struct Queue q;
    cout<<"ENTER THE SIZE "<<endl;
    cin>>q.size;
    q.Q=new int[q.size];
    q.fornt=q.rear=-1;
}
