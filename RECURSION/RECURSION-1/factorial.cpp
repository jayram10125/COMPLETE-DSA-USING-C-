//factorial of a number
#include <iostream>
using namespace std;
int fact(int n){
    // base case
    if(n==1 || n==0) return 1;
    //recursive call

    return n*(n-1);

}

int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<fact(n);
    
    return 0;
}