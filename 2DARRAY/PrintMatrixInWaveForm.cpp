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

    // wave print 
    cout<<"wave print : \n";
    for(int i=0;i<m;i++)
    {
        if(i%2==0){
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        
        cout<<endl;

    }


    

    
    

    return 0;
}