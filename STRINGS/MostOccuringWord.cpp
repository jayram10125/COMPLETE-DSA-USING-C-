
//most occuring word
// check which charecter occures more time

#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str="raghav is a maths teacher. he is a DSA mentor as well ";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }

    // vecto print
    /* 
    cout<<"before sorting : \n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    */
    sort(v.begin(),v.end());
    /*
    cout<<"\nafter sorting :\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    */

    // abb jaise neighbouring bala question kye the waise hi kar do
    int count=1;
    int maxCount=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])
        {
            count++;
        }
        else count =1;
        
        maxCount= max(maxCount , count); // ise if bale condition se bhi kar sakte hai but try new 
    }
    count=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])
        {
            count++;
        }
        else count =1;

        if(count==maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
        
        
    }
   
}