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
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }

    }
    cout<<endl;

    // spiral
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    int total_element=m*n;
    int count=0;
    while(minr<=maxr && minc<=maxc)
    {
        //right
        for(int j=minc;j<=maxc && count<total_element;j++)
        {
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        
        //down
        for(int i=minr;i<=maxr &&count<total_element;i++)
        {
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        
        //left
        for(int j=maxc;j>=minc && count<total_element;j--)
        {
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        
        //up
        for(int i=maxr;i>=minr && count<total_element;i--)
        {
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }




    return 0;
}