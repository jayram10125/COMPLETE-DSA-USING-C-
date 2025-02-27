// check a number is even or odd without using modulo operator
#include<iostream>
using namespace std;
int main()
{
    int nums;
    cout<<"enter aa number : ";
    cin>>nums;

    if(nums & 1)
    {
        cout<<"odd";
    }
    else{
        cout<<"even";
    }

    return 0;
}