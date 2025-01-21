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

    //sort(str.begin(),str.end());//ye inbuilt function se ho gya ise bubble sort ke help se karo

    cout<<"before sorting : "<<str;
    int n=str.size();
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-1-i;j++ )
        {
            if(str[j]>str[j+1])
            {
                swap(str[j],str[j+1]);
                flag=false;

            }
        }
        if(flag==true)
        {
            break;
        }
    }
    reverse(str.begin(),str.end());
    cout<<"\nafter sorting the reverse order string is  : "<<str;

    return 0;
}