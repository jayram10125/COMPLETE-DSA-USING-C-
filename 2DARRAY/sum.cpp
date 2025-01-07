//sum of all the elements of 2D array
//largest element from 2D array
#include<iostream>
#include<climits>
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

    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    //printing the elements of 2D array
    cout<<"sum of all the  element is : "<<sum;


    return 0;
}