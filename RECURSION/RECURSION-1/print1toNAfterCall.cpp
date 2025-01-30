//print 1 to n without extra parameter
#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return; //base case
    print(n-1);
    cout<<n<<endl;
    
}

int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(n);
    
    return 0;
}