//print 1 to n 
#include <iostream>
using namespace std;
void print(int i , int n){
    if(i>n) return; //base case
    cout<<i<<endl;
    
    print(i+1,n);
    
}

int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(1,n);
    
    return 0;
}