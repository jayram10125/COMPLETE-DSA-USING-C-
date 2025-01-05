//Linear search

#include<iostream>
using namespace std;
int main()
{
    int size;
    bool flag=false;
    cout<<"enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"enter the "<<size<<" elements of array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element that you want to search : ";
    cin>>x;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==x)
        {
            flag=true;
        }
    }

    if(flag==true)
    {
        cout<<"element is found";
    }
    else
    {
        cout<<"element is not found";
    }

    return 0;
}