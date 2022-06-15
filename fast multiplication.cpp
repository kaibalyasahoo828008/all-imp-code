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
int muliplication(int a,int b) //let a=2 b=10
{
    int rest=0;
    while(b)
    {
        if(b&1) rest=rest+a;
        a=a+a;
        b=b>>1;
        
        cout<<"a"<<a<<endl;
        cout<<"b"<<b<<endl;
        cout<<"rest"<<rest<<endl;
        
         
    }
    
    return rest;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<muliplication(a, b);
}
