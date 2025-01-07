//understanding 2D array
#include<iostream>
using namespace std;
int main()
{
    //static
    int a[][3]={{1,2,3},{1,2,3}};/*hum jab initialization and declaration dono sath me hi karte 
             hai to row ka size declare nahi bhi karte to chalega but column dikhana jaruri hai but sirf 
             declare karne ke time row and column dono batana hoga*/
    
    //dynamic 
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


    return 0;
}