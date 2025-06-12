#include<iostream>
using namespace std;
int main()
{
    int r=5;
    for(int i=1;i<=r;i++){
        for(int j=r-1;j>=i;j--){
            cout<<" "<<" ";
            
            
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }



    return 0; 
}