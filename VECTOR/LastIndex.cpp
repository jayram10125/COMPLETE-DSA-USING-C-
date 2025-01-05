//find the last occurrence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);

    int x=6;

    
    int idx=-1;

    // method 1 forward traversing

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            idx=i;
        }
    }
    cout<<"last occurrence of "<<x<<" is : "<<idx <<"(method 1)";


    //method 2 backword traversing
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]==x)
        {
            idx=i;
            break;
        }
    }
    
    cout<<"\nlast occurrence of "<<x<<" is : "<<idx<<"(method 2)";

    return 0;
}