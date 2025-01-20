#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="AZYZXBDXJK";
    string str="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='X')
        {
            str.push_back(s[i]);
        }
    }

    sort(str.begin(),str.end());//ye inbuilt function se ho gya ise bubble sort ke help se karo
    cout<<str;

    return 0;
}