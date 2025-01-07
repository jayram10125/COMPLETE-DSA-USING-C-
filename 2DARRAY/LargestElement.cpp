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

    int max=INT_MIN;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    //printing the elements of 2D array
    cout<<"maximum element is : "<<max;


    return 0;
}