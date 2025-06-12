//
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter size of  matrix : ";
    cin>>m;
    cout<<"enter "<<m*m<<" elements of  matrix : \n";
    int a[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    int sumDiag1=0;
    int sumDiag2=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if( i>=j ) cout<<a[i][j]<<" ";
            else cout<< " "<<" ";
            
        }
        cout<<endl;
    }
    
    

    

    
    

    return 0;
}