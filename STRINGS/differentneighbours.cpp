//input a string and return the number of times the neighbouring characters are different from each other.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;
    int n=str.length();
    
    for(int i=0;i<n;i++)
    {
        if(n==1) // yadi ek hi size hai to uska to koi neighbour hai hi nahi
        {
            break;
        }
        if(n==2 && str[0]!=str[1])  // yadi string ki size 2 hai ex: ab too a , b se different hai and phir b  a se different hai dono to baaat ek hi hai to count 1 hi hona chahaiye
        {
            count=1;
            break;
        }
        if(i==0)
        {
            if(str[i]!=str[i+1])
            {
                count++;
            }
        }
        else if(i==n-1)
        {
            if(str[i]!=str[i-1])
            {
                count++;
            }
        }
        else if(str[i]!=str[i+1]  && str[i]!=str[i-1])
        {
            count++;
        }
    }
    cout<<count;

}