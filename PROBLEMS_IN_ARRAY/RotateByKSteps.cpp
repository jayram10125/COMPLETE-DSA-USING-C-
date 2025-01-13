#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &v ,int i,int j)
{
    while(i<=j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    vector<int> v;
    cout<<"enter n elements of array : ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"your array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"enter the reverse steps : ";
    cin>>k;
    k=k%n;
    reverse(v,0,n-k-1);
    reverse(v,n-k,n-1);
    reverse(v,0,n-1);
    cout<<"aftre rotate by k steps : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }




    return 0;
}