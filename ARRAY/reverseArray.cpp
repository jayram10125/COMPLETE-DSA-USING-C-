// reverse the array 
#include<iostream>
using namespace std;
int main()
{
    int n;
   
    cout<<"enter the size of array : ";
    cin>>n;
    // int *arr=new int[n] ;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        j--;
        i++;
    }
    cout<<"After reverse : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}