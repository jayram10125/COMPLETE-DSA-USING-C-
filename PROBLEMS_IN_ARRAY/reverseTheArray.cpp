// reverse the array
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={2,3,5,6,8,7,9,1};
    int i=0;
    int j=7;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

}