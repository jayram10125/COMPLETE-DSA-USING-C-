// find all the factors of a number (m-1 normal tarika ki 1 se n tak sare number ko devide karke dekh lo)
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=60;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(i!=sqrt(n))
            {
                cout<<n/i<<" ";
            }
        }
    }

    return 0;
}