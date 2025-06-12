//count the number of elements in given array grater than a given number x.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int *arr=new int[n] ;
    // int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"traversing : ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}