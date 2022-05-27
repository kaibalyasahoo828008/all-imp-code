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

int CheckThePowerOfTwo( int &n)
{
    return (n&(n-1));
    
}


int countBits(int &n)
{
    int count=0;
    while(n>0)
    {
    int last_bits=(n&1);
        count=count+last_bits;
    n=n>>1;
    }
    return count;
}

int countBits_hack(int &n)
{
    int couent=0;
    while(n>0)
    {
        n=n&(n-1);
        couent++;
    }
    return couent++;
}


int Number_TO_Binary(int num)
{
    int ans=0;
    while(num>0)
    {
        ans=10*ans+getIthBit(num, 0);
        num=num>>1;
        
    }
    return ans;
    
}






int main()
{
    /*int num;
    cin>>num;
   
    for(int i=5;i>=0;i--)
    {
    cout<<getIthBit(num,i);
    }
     */
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
    /*
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
    */
   
    /*
     You are given two 32-bit numbers,N and M,and Two  bit positions i and j.Write a  method to set all bits  between i and j in N equal to M .M(becomes a substring of N locationed at and starting at j)
     
   examples
     N=10000000000;
     M=10101
     i=2,J=6;
     output->1001010100
     
     
     */
   
    /*
    int n=1000000000;
    int m=10101;
    int i,j;
    cin>>i>>j;
    
    ClearBitsInrRange(n, i, j);
    m=m<<i;
    n=n|m;
    for(int i=5;i>=0;i--)
    {
    cout<<getIthBit(n,i);
    }
    */
    
    /* to check the number is power of 2 or not*/
    
   /* int num;
    cin>>num;
    
    if(CheckThePowerOfTwo(num)==0)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    */
    
    
    /* COUNT THE NUMBER OF BITS    EG 9->1001
                            OUTPUT      ->2
                       we perform and operation if ans is one then we shif it
                                    
     
     */
    
   /* int num;
    cin>>num;
    
    //cout<<countBits(num)<<endl;
    cout<<countBits_hack(num)<<endl;
    
    */
    
    /* MAKE THE NUMBER INTO A BINARY FORM*/
    
    int num;
    cin>>num;
    
    cout<<Number_TO_Binary(num)<<endl;
    
    
    
    
    
    
    
    
    return 0;
}



