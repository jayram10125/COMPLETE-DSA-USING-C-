//climbing stair 
#include <iostream> 
using namespace std;
int stair(int n)
{
    // if(n==2) return 2;
    if(n==0||n==1) return 1;
    return stair(n-1) + stair(n-2);
    
}
int main() {
    int n=3;
    cout<<stair(n);
    return 0;
}