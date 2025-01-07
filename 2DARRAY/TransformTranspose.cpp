//transpose without using extra space
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
    // transpose in the same matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
            {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            }
        }
    }
    cout<<"\nprinting transpose matrix without extra space : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}