#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,3,5,2,1};
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++)
    {
        int j=i;
        // while(j>=1)
        // {
        //     if(arr[j]>=arr[j-1]) break;
        //     else swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while(j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}