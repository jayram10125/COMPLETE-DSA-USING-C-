//print 1 to n [return type]
#include <iostream>
using namespace std;
int sum(int n){
    // base case
    if(n==0) return 0;
    //recursive call

    return n+sum(n-1);

}

int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<sum(n);
    
    return 0;
}
