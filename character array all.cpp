//
//  main.cpp
//  all string operators
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    char s[10];
    char y[num];
    cin>>s;
    cin.ignore();
    cin.get(s,10);
    cin.ignore();/* you have to use it to accespt every  keya*/
    cin.getline(y,num);
    cout<<s<<endl;
    cout<<y;
    
    /* FUNCTION IN STRING.H AND CSTRING */
    cout<<"function usig cstring string"<<endl;
    
    char s1[10]="hello";
    cout<<strlen(s1)<<endl;/* to show the length of a an array*/
    char s2[20]="gandu";
    
    strcat(s1,s2);/* it will used the sourse string s2 attached to the end of destination*/
    cout<<s1<<endl;
    
    char s3[10]="";
    strcpy(s3,s2);/* it will used to copy sourse string to empty main string*/
    cout<<s3<<endl;
    
    char s4[100]="programming";
    char s5[8]="gram";/* it will show remaing string of sourse string*/
    cout<<strstr(s4,s5)<<endl;
    /* and you can use find word  in a stirng*/
    strstr(s4,s5)!=NULL;
    
    
    char s6[100]="programming";
    char s7[8]="g";/* it will show remaing string of sourse string*/
    cout<<strchr(s6,'g')<<endl;/* if you write strchr (s6,s7)*/
    
    char s8[10]="kanpur";
    cout<<strcmp(s1,s8)<<endl;/* to compare the two string */
    
    
    
    
    
    
    
    
    
    
    
    
}
