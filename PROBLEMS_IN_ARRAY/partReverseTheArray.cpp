//reverse part the array
#include<iostream>
#include<vector>
using namespace std;
void reversepart(int arr[],int s,int l)
{
    int i=s;
    int j=l;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int arr[8]={2,3,5,6,8,7,9,1};
    int s;
    cout<<"enter the starting index : ";
    cin>>s;
    int l;
    cout<<"enter the ending index : ";
    cin>>l;
    reversepart(arr,s,l);
    
    
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

}