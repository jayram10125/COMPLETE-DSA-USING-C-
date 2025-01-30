//print sum 1 to n parametrized
//print 1 to n 
#include <iostream>
using namespace std;
void sum1toN(int sum , int n){
    if(n==0) {
        cout<<sum;
        return;
    }
    sum1toN(sum+n,n-1);
    
    
}

int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    sum1toN(0,n);  // suru me sum ko 0 value de denge
    
    return 0;
}