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
    int count, max=0, row=0;
    for(int i=0;i<m;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                count++;
            }
        }
        if(max<count){
            max=count;
            row=i+1;
        }
    }
    cout<<"row "<<row<<" has maximum number of 1's.";
    return 0;
}
// 0 1 0 1 1 0 1 0 1 1 1 1