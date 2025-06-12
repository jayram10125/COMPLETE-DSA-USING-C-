#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int a=10;
    int b=20;
    // cout<<a<<" "<<b<<endl;
    // swap(a,b);
    // cout<<a<<" "<<b<<endl;
    int &p = a;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p;

}