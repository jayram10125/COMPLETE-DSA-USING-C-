/*
   ****
  ****
 ****
****
*/

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=4;i>=1;i--){
        for(int j=i-1;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
    
    