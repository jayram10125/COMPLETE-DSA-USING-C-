//
#include<iostream>
using namespace std;
int main()
{
    
    int m;
    cout<<"enter rows of  matrix : ";
    cin>>m;
    int n;
    cout<<"enter columns of  matrix : ";
    cin>>n;
    cout<<"enter "<<m*n<<" elements of  matrix : \n";
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }

    }
    cout<<endl;
    
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        cout<<"sum of row "<<i+1<<" : "<<sum<<endl;

    }

    

    

    
    

    return 0;
}