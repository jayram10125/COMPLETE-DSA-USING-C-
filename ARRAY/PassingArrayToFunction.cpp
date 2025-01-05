#include<iostream>
using namespace std;
void display(int a[]) //display(int *a)
{
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void change(int b[]) // display(int* b)
{
    b[0]=100;
}
int main()
{
    int arr[5]={1,4,2,7,46};
    display(arr);
    change(arr);
    display(arr);


    return 0;
}