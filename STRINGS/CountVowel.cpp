//input a string of length n and count all the vowels in the given string.
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
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    cout<<"the total numbet of vowel is : "<<count;

}