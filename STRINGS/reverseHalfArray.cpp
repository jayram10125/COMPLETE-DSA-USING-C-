// Input a string of even length and reverse the first half of the array.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter an even size string :  ";
    getline(cin,str);
    int n=str.length();
    reverse(str.begin(),str.begin()+(n/2));
    cout<<"reverse string is : "<<str;

}