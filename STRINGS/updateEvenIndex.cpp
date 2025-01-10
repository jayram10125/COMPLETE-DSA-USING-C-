//Input a string of size n and update all the even positions in the string to character ‘a’ . Consider 0-based indexing.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of string : ";
    cin>>n;

    char str[n];
    int count=0;
    cout<<"enter string seperating character : ";
    for(int i=0;i<n;i++)
    {
        cin>> str[i];
    }
    for(int i=0;str[i]!=0;i++)
    {
        if(i%2==0)
        {
            str[i]=='a';
        }
    }
    cout<<str;

}