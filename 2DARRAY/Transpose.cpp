//transpose of matrix
#include<iostream>
using namespace std;
int main()
{
    
    int m;
    int n;
    cout<<"enter number of rows : ";
    cin>>m;
    cout<<"enter number of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"enter the "<<m*n<<" elements : ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing the elements of 2D array
    cout<<"elements of array are : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //printing the transpose
    cout<<"\ntranspose matrix just printing  : \n";
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //storing it in new matrix
     int trans[n][m];
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            trans[i][j]=arr[j][i];
        }
     }
     cout<<"printing transpose matrix using new matrix : \n";
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
     }



    return 0;
}