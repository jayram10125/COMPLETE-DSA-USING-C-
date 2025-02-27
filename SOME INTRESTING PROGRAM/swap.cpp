// check a number is even or odd without using modulo operator
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"before swapping : ";
    cout<<a<<" "<<b<<endl;
    a=a+b-(b=a);
    cout<<"after swapping : ";
    cout<<a<<" "<<b;
    return 0;
}