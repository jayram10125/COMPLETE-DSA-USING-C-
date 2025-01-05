#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v1)
{
    v1[0]=6;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; //1 2 3 4 5
    }
    cout<<"\n";
    change(v);   // change doesn't reflected means it is call by value not by address
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";  //1 2 3 4 5
    }



    return 0;
}