

#include <iostream>
#include<vector>
using namespace std;




int main()
{
    /* declaration*/
    vector<int>v1;
    vector<int>v2(4);
    vector<int>v3(5,10);
    vector<string>v4(3,"hello");
    
    /* showing output*/
    cout<<v1[0]<<endl;
    cout<<v4[1]<<endl;
    
    /* using for loop*/
    for(int i=0;i<=4;i++)
    {
        cout<<v4[i]<<endl;
    }
    /* push_back->is a memeber function .which can be used to add value to the vector at the end*/
    v1.push_back(10);
    /* v1.capacity()->to show the capacity of an vector*/
    v1.capacity();
    /* pop_back-> it removes the last elements*/
    v1.pop_back();
    v1.capacity();
    /* above capacity will show the decrease capacity*/
    /* v1.size()->it  returns the number of elements currently in the vector*/
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
    /* v1.clear()->it removes all elements from the vector*/
    v1.clear();
    /* v1.at()->it returns the elements at the index in the vector*/
    cout<<"value at index 3 is "<<v1.at(3);
    /* fornt()->returns the first elements of the vector and back()->returns the last elements of the vector */
    
    /* itelator*/
    
    
    vector<int>::iterator it=v1.begin();
    v1.insert(it+2, 30);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
    return 0;
    
    
    
    
    
}
