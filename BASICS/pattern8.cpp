#include<iostream>
using namespace std;
int main()
{
    int r=5;
    for(int i=5;i>=1;i--){
        
        for(int j=5;j>i;j--){
            cout<<" "<<" ";
            
            
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
            
        }
        
        cout<<endl;
    }



    return 0; 
}