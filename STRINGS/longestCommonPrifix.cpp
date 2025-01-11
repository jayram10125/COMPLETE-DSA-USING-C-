//longest common prifix


#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){

    //["flower","flow","flight"]
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    // cout<<endl;
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }

    string strFirst=v[0];
    string strlast=v[v.size()-1];
    string strRes;
    for(int i=0;i<strFirst.size();i++)
    {
        if(strFirst[i]==strlast[i])
        {
            strRes+=strFirst[i];
        }
    }
    cout<<strRes;
   
 
   
}