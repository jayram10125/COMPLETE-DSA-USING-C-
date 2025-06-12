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
            if( i==j )
            sumDiag1=sumDiag1+a[i][j];

            if(i+j==m-1)
            sumDiag2=sumDiag2+a[i][j];
        }
    }
    cout<<"sum of diag1 is : "<<sumDiag1<<endl;
    cout<<"sum of diag2 is : "<<sumDiag2<<endl;
    

    

    
    

    return 0;
}