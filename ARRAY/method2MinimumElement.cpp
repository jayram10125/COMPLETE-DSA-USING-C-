//finding minimum elements from the array

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
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"the minimum element is : "<<min;
    
}