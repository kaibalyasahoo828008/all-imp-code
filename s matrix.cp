
//
//  main.cpp
//  sparse matrix
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;


struct elements
{
    int i;/* to store row number of the element*/
    int j;/* to store the coulmn number of the elements*/
    int x;/* to store the value at elements*/
    
};






struct spaxMat
{
    int m;/* to store the number of row */
    int n;/* to store the number of coulmn */
    int num;/* to store the number of non zero elements*/
    struct elements *e;/* to creat dynamic array to store the the row number ,to store the column and value itself*/
};

void creat(struct spaxMat *s)/* important it is not a constructor*/
{
    cout<<"ENTER THE DIMENSION"<<endl;
    cin>>s->m;/* enter the number of row in the sparx matrix*/
    cin>>s->n;/* enter the number of column in sparx matrix*/
    cin>>s->num;/* enter the number of non zero elements */
    s->e=new elements[s->num];/* before some function we write new in [arr.size] this will order memory to store intger class/structure here integer is  either struct/class so here elemt is class which dynamic allocated*/
    
    for(int k=0;k<s->num;k++)
    {
        cin>>s->e[k].i;/* here s is the one element of spax matrix it will store the vlaue
                        of i cordinate of dynamic array of as i*/
        cin>>s->e[k].j;
        cin>>s->e[k].x;
    }

}

void display(struct spaxMat s)
{
    int k=0;
 for(int i=1;i<=s.m/*it is the number of row */;i++)/* to show the row*/
    {
     for(int j=1;j<=s.n/* it is the number of column*/;j++)/* to  show the coloum*/
     {
            if(i==s.e[k].i && j==s.e[k].j)
       
             {
                cout<<s.e[k].x;
               k++;
            }
            else
            {
                cout<<"0";
            }
            
            
            
            
        }
        
        cout<<endl;
        
        
        
        
    }
    
    
   
    
  
   } 
    
    











int main()
{
    struct spaxMat s;
    creat(&s);
    display(s);
}
