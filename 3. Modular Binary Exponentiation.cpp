//
//  main.cpp
//  Binary exponetial
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//
// mod will be prime number  i.e


#include <iostream>
#include<math.h>
using namespace std;
const int mod= 1e9 + 7;
int powr(int a,int b) //let a=2 b=10
{
    int rest=1;//             rest=784*4=
    while(b)//10 !=0
    {
        if(b&1) rest*=a ,rest=rest%mod;   //1  (1010)&(1)  // 2                                      (101)&1=1                       rest=4 //3      (10)&1=0  //41&1=1 rest=4*256
        a*=a;a=a%mod ;                          //1   4=2*2      // 2 16=4*4                           //3  256=16*16    //4
        b=b>>1;                   //1   5=10/2     // 2 2=5/2;             //3                       1=2/2;      //4
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
