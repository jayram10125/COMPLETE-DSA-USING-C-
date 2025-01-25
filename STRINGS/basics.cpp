#include<iostream>
using namespace std;
int main(){
    char str[7]={'a','b','c','d','e'};
    for(int i=0;i<5;i++)
    {
        cout<<str[i]<<" ";

    }
    cout<<endl;
    //proof of last index'\0
    cout<<(int)str[5];
    cout<< endl;
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    //another way of printing character array
    cout<<str;

}