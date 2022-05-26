//
//  main.cpp
//  bit manipulation
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

int getIthBit(int num,int W)
{
    int Mask=(1<<W);//declare a variable to store data
    return(num & Mask)>0?1:0;
    
}

void ClearIthBit(int &num,int W)//clearithBit is turn 1 into 0 from bits only
                                //         5->000101  here you can only perform ClearIthBit of index 0                      and  2
                                //            &111110->~(1<<index)
                                //                       if we  clear index 0 i.e turn 0->1 the new number
                                //         4->000100
{                               //
    int Mask=~(1<<W);
    num=num&Mask;
   
    
}


void SetIBit(int &num  ,int W)   //SetIBit is turn 0 into 1  from bits only
{                                //          5->000101 here you can only perform SetIBit of index except                                                     0 and 2
    int Mask=(1<<W);             //           |000010->(1<<index)
    num=num|Mask;                //                    if we assign index 1 i.e0->1 the new number
                                 //            7->000111

}

void UpdateIBit(int &num,int W)//UpdateIBit means you should update this  either 0 if it was 1 or 1 if it                             is 0
                                //it combination of both ClearIBit and SetIBit
{
    if(getIthBit(num,W)==0)
    {
    SetIBit(num  ,W);
    }
    else
    {
    ClearIthBit(num,W);
    }
}


void ClearLastIBits(int &n,int i)
{
   /* for(int k=0;k<i;k++) O(n)//worst case
    {
        ClearIthBit(n, k);
    }
    */
    
    
    int mask=(-1<<i);//O(n)      -1->111111
                     //          -1<<i->111000 let i=2
                     //           then we perform and operation to get all zero
    n=n&mask;
    
    
    
}


void ClearBitsInrRange(int &n,int i,int j)
{
    int mask1=(-1<<(i));
   int mas2=(-1<<(j+1));
   for(int i=5;i>=0;i--)
    {
    cout<<getIthBit(mask1,i);
    }
    cout<<endl;
     for(int i=5;i>=0;i--)
    {
    cout<<getIthBit(mas2,i);
    }
    n=n&(~(mas2^mask1));
}








int main()
{
    int num;
    cin>>num;
   
    for(int i=5;i>=0;i--)
    {
    cout<<getIthBit(num,i);
    }
    /*int Which_index;
    cin>>Which_index;
    
    ClearIthBit(num, Which_index);
    
    cout<<"ClearIthBit()="<<num<<endl;
    
    for(int i=5;i>=0;i--)
    {
    cout<<getIthBit(num,i);
    }
    int Which_index1;
    cin>>Which_index1;
    SetIBit( num  ,Which_index1);
    cout<<"SetIBit"<<num<<endl;
    */
    /*
    int Which_index1;
    cin>>Which_index1;
    UpdateIBit(num, Which_index1);
    cout<<num<<endl;
    for(int i=5;i>=0;i--)
    {
    cout<<getIthBit(num,i);
    }*/
    
   /* int Which_index2;
    cin>>Which_index2;
    ClearLastIBits(num, Which_index2);
    */
    int Which_index3,Which_index4;
    cin>>Which_index3;
    cin>>Which_index4;
    ClearBitsInrRange(num, Which_index3, Which_index4);
    cout<<endl;
    cout<<num<<endl;
    for(int i=5;i>=0;i--)
    {
    cout<<getIthBit(num,i);
    }
    
    return 0;
}



