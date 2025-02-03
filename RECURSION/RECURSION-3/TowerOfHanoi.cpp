#include<iostream>
using namespace std;
void hanoi(int n ,char a,char b,char c){
    if(n==0) return;
    hanoi(n-1,a,c,b); //kyunki n-1 ke ly 2nd bala destination and 3rd bala helper ka kaam karta hai
    cout<<a<<"->"<<b<<endl;
    hanoi(n-1,b,a,c); // abhi b source and a helper and c destination ke jaise act karega

}
int main()
{
    int n=3;
    hanoi(n,'A','B','C');

    return 0;
}