#include<iostream>
using namespace std;
int sum(int n){
    if(n==1 ) return 1;
    return n+sum(n-1);
}
int main()
{
    int f=5;
    cout<<sum(f);
    return 0; 
}