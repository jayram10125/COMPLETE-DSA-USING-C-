//M2 fibonaccu number
#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==1 || n==2) return 1;
    int leftAns=fibo(n-1);
    int rightAns=fibo(n-2);

    return leftAns+rightAns;
}
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<fibo(n);
      
    return 0;
}