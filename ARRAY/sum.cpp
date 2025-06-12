// sum of all the element 
#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the size of array : ";
    cin>>n;
    int *arr=new int[n] ;
    // int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"sum is : ";
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
       
    }
    cout<<sum;
    
    return 0;
}