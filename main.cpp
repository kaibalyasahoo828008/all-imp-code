//
//  main.cpp
//  lower matrix using structure
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

struct Matrix
{
    int *A;
    int arrsize;
    int arrlength;
    int size;
    
};

void set1(struct Matrix *m)/* it is setting for lower tranngular matrix*/
{
    cout<<"enter the elements"<<endl;
    for(int i=0;i<m->arrlength;i++)
    {
        cin>>m->A[i];
    }
    
}

int  get(struct Matrix m,int i,int j)
{
    if(i>=j)
        return m.A[i-1];
    return 0;
    
}
void display1(struct Matrix m)/* to display lower  matrix*/
{
    for(int i=1;i<=m.size;i++)
    {
        for(int j=1;j<=m.size;j++)
        {
            if(i>=j)
            {
        int num=((i-1)*i)/2+(j-1);
            cout<<m.A[num];
            }
            else
            {
                cout<<"0";
            }
            
            
        }
        cout<<endl;
    }
}
void display2(struct Matrix m)/* to display upper matrix*/
{
    for(int i=1;i<=m.size;i++)
    {
        for(int j=1;j<m.size;j++)
        {
            if(i<=j)
            {
        int num=(((i-1)*m.size)-(((i-2)*(i-1))/2))+(j-i);
            cout<<m.A[num];
            }
            else
            {
                cout<<"0";
            }
            
            
        }
        cout<<endl;
    }
}

void display3(struct Matrix m)/* to display symetric matrix*/
{
    for(int i=1;i<=m.size;i++)
    {
        for(int j=1;j<m.size;j++)
        {
            if(i>=j)
            {
        int num=(((j-1)*m.size)-(((j-2)*(j-1))/2))+(i-j);
            cout<<m.A[num];
            }
            else
            {
                int num=(((i-1)*m.size)-(((i-2)*(i-1))/2))+(j-i);
                    cout<<m.A[num];
            }
        }
        cout<<endl;
    }
}

void display4(struct Matrix m)/* to display trigonal matrix*/
{
    for(int i=1;i<=m.size;i++)
    {
        for(int j=1;j<=m.size;j++)
        {
            if(i>=j)
            {
        int num=(((j-1)*m.size)-(((j-2)*(j-1))/2))+(i-j);
            cout<<m.A[num];
            }
            else
            {
                int num=(((i-1)*m.size)-(((i-2)*(i-1))/2))+(j-i);
                    cout<<m.A[num];
            }
        }
        cout<<endl;
    }
}
void display5(struct Matrix m)/* to display lower matrix*/
{
    for(int i=1;i<=m.size;i++)
    {
        for(int j=1;j<=m.size;j++)
        {
            if(i-j==1)
            {
                cout<<m.A[j-1];
                
            }
            else if(j-i==1)
            {
                cout<<m.A[7+i-1];
            }
            else if(j-i==0)
            {
                cout<<m.A[3+i-1];
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
}






int main() {
    // insert code here...
 Matrix m;
    int choice;
    
    cout<<"enter square matrix size"<<endl;
    
    
    cin>>m.size;
    m.arrsize=m.size*m.size;
    
    cout<<"for lower trangular matrix -1"<<endl;
    cout<<"for upper trangular matrix -2"<<endl;
    cout<<"for symmetric  matrix -3"<<endl;
    cout<<"for trigonal  matrix -4"<<endl;
    cin>>choice;
    
    
    
    
    
    switch (choice)
    {
        case 1:
            m.arrlength=(m.size*(m.size+1))/2;
            m.A=new int [m.arrsize];
            set1(&m);
            display1(m);
            
            break;
            
        case 2:
            m.arrlength=(m.size*(m.size+1))/2;
            m.A=new int [m.arrsize];
            set1(&m);
            display2(m);
            
            
            break;
        case 3:
            m.arrlength=(m.size*(m.size+1))/2;
            m.A=new int [m.arrsize];
            set1(&m);
            display4(m);
            
            
            break;
        case 4:
            m.arrlength=(3*m.size)-2;
            m.A=new int [m.arrsize];
            set1(&m);
            display5(m);
            
            
            break;
    }
    
}
