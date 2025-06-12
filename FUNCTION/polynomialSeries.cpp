#include<iostream>
using namespace std;
int fact(int x,int n){
    if(n==0) return 0;
    int res=1;
    res=res+x*fact(x,n-1);
    return res;
}
int main()
{
    int n=5,x=2;
    cout<<fact(x,n);
    return 0; 
}