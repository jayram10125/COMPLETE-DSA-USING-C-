//Make a function which calculates a raised to power b using recursion
#include <iostream>
using namespace std;
int power(int a , int b){
    // base case
   if(b==0) return 1;
    //recursive call

    return a*power(a,b-1);

}

int main() {
    int a,b;
    cout<<"enter base : ";
    cin>>a;
    cout<<"enter power : ";
    cin>>b;
    cout<<a <<"raised to "<<b<<" is : "<<power(a,b);
    
    
    return 0;
}