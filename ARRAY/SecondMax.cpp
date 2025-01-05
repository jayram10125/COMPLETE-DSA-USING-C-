//find the second  maximum elements out of all the elements
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array  :";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    int smax=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(smax<arr[i] && arr[i]!=max)
        {
            smax=arr[i];
        }
    }
    cout<<"the  second maximum element is : "<<smax;
    
} 
