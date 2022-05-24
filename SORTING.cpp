
/*
SORTING TECHNIQUES
 
 ->CRITERIA FOR ANALYSIS
 1.Number if comparision
 2.Number of Swaps
 3.Adaptive
 4.stable
 5.Extra Money
 
 
 TYPES OF SORTING
 1.Bubble    sort  ««
 2.Insertion sort  «« O(n^2)
 3.Selection sort  ««
 4.Heap      sort  ||
 5.Merge     sort  ||O(nlogn)
 6.Quick     sort  ||
 7.Tree      sort  ||
 8.Shell     sort  ==O(n^3/2)
 9.Count     sort  –O(n)
 10.Bucket   sort  –O(n)
 11.Redix    sort  –O(n)
  
 
 






















*/

#include <iostream>
#include<vector>
#include <cmath>
using namespace std;
int num;
 vector<int>A;
 void InsertionSort(int n)
{
     for(int i=1;i<n;i++)
     {
        int j=i-1;
        int  x=A[i];
         while(j>-1 && A[j]>x)
         {
             A[j+1]=A[j];
             j--;
         }
         
         A[j+1]=x;
         
     }
     
     
     
     
     
 }
 
 
void bubble_Sort(int n)
{
    int Flag=0;
    for(int i=0;i<n-1;i++)
    {
       
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                Flag=1;
                int b=A[j];
                A[j]=A[j+1];
                A[j+1]=b;
            }
        }
        
    }
    
    if(Flag==0)
        cout<<"sorted"<<endl;
    
   
}

void Show()
{
      for(int i=0;i<num;i++)
    {
        cout<<A[i];
    }
      
}




int main()
{
        
    cout<<"ENTER THE SIZE OF AN ARRAY"<<endl;
   
    cin>>num;
    A.resize(num);
    for(int i=0;i<num;i++)
    {
        cin>>A[i];
    }
    
    // bubble_Sort(num);
    InsertionSort(num);
    Show();
    
   
        

    return 0;
}


