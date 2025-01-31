//power function logirithmic
 
#include <iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return x;
    int ans=pow(x,n/2);
    if(n%2==0) return ans*ans;
    else return ans*ans*x;

}

int main() {
    int a,b;
    cout<<"enter base : ";
    cin>>a;
    cout<<"enter power : ";
    cin>>b;
    cout<<a <<" raised to "<<b<<" is : "<<pow(a,b);
    
    
    return 0;
}