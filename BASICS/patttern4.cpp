#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter row : ";
    cin>>row;
    int n=(row*(row+1))/2;
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n--;
            
        }
        cout<<endl;
    }



    return 0; 
}