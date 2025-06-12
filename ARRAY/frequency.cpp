// sum of all the element 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the size of array : ";
    cin>>n;
    // int *arr=new int[n] ;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter search number : ";
    cin>>x;
    int count=0;
    for(int i =0;i<n;i++){
        if(arr[i]==x) count++;
    }
    cout<<count;

    
    return 0;
}