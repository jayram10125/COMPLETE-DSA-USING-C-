/*
A
AB
ABC
ABCD
*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }

    return 0;
}