//product of all the elements

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int product=1;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       product=product*arr[i];
    }
    cout<<"product of all the elements of array is : "<<product;
    return 0;
}