#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter row : ";
    cin>>row;
    // int n=(row*(row+1))/2;
    for(int i=row;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }



    return 0; 
}