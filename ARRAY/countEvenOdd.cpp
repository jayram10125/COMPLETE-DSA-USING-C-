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
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) count_even++;
        else count_odd++;
    }
    cout<<count_even<<endl;
    cout<<count_odd;
    
    return 0;
}