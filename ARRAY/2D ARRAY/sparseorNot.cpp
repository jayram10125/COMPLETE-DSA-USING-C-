//
#include<iostream>
using namespace std;
int main()
{
    
    int m,n;
    cout<<"enter rows of  matrix : ";
    cin>>m;
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
    int count0=0,countExt=0;
    for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                count0++;
            }
            else countExt++;
        }
       
    }
    if(count0>countExt)
        cout<<"it is a sparse matrix";
    else
        cout<<"it is not a sparse matrix";
    return 0;
}
// 0 1 0 1 1 0 1 0 1 1 1 1