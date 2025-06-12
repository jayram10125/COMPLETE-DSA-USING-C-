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
    int index=-1;
    int s;
    cout<<"enter searching element : ";
    cin>>s;
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            index=i;
            break;
        }
    }
    if(index==-1) cout<<"not found";
    else cout<<"found at index : "<<index;
    
    return 0;
}