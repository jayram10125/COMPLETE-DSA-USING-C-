#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //initialization of vector
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v[0]=9;
    v.push_back(8);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";//garbage value
    //initialization method 2 not good way islye humesa push_back ke help se insert karo
    vector<int> v1(5);//suru me size dena bhi aacha way nahi hai halanki hum kar sakte hain
    v1[1]=2;
    cout<<v1[1];

    //sare index pe same element enter karna

    vector<int> v2(8,7);//8 size ka array ban jayega and each index pe 7 value rahega
    return 0;
}