#include<iostream>
using namespace std;
int fact(int n){
    int pr=1;
    for(int i=1;i<=n;i++){
        pr=pr*i;
    }
    return pr;
}
int main()
{
    int f=5;
    cout<<fact(f);
    return 0; 
}