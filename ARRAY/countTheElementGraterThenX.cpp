//count the number of elements in given array grater than a given number x.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int count=0;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter x : ";
    cin>>x;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    cout<<"total element that is grater than "<<x<<" is : "<<count;
    return 0;
}