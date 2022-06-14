//
//  main.cpp
//  Binary exponetial
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
// o(logn) because b=b/2

#include <iostream>
#include<math.h>
using namespace std;

int powr(int a,int b) //let a=2 b=10
{
    int rest=1;//             rest=784*4=
    while(b)//10 !=0
    {
        if(b&1) rest=rest*a;   //1  (1010)&(1)  // 2 (101)&1=1   rest=4 //3 (10)&1=0  //41&1=1 rest=4*256
        a*=a;                  //1   4=2*2      // 2 16=4*4             //3  256=16*16    //4
        b/=2;                  //1   5=10/2     // 2 2=5/2;             //3   1=2/2;      //4
        cout<<"a"<<a<<endl;
        cout<<"b"<<b<<endl;
        
        
    }
    
    return rest;
    
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<powr(a, b);
}
