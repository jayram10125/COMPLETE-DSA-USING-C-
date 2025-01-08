//multiplication of two matrices
#include<iostream>
using namespace std;
int main()
{
    cout<<"multiplication will happen only when if column of 1st matrix will equal to of row of 2nd matrix!!\n";
    int m;
    cout<<"enter rows of 1st matrices : ";
    cin>>m;
    int n;
    cout<<"enter columns of 1st matrices : ";
    cin>>n;
    int p;
    cout<<"enter rows of 2nd matrices : ";
    cin>>p;
    int q;
    cout<<"enter columns of 2nd matrices : ";
    cin>>q;

    if(n==p)
    {
        cout<<"enter "<<m*n<<" elements of 1st matrices : \n";
        int a[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }

        }

        cout<<"enter "<<p*q<<" elements of 2nd matrices : \n";
        int b[p][q];
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                cin>>b[i][j];
            }

        }

        int res[m][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j]=0;//resultant ke sare element ko zero se initialize karana
                for(int k=0;k<p;k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }

        }

        cout<<"the resultant matrix is : \n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;

        }
    }
    else
    {
        cout<<"matrices can't be multiplied";
    }
    

    return 0;
}