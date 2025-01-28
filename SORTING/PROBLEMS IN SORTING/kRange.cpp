#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={5,3,10,3};
    int n=4;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            kmin = max(kmin,((arr[i]+arr[i+1])/2.0f));
        }
        else
        {
            kmax = min(kmax,((arr[i]+arr[i+1])/2.0f));
        }
        if(kmin>kmax)
        {
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax)
    {
        if(kmin-(int)kmax==0){
            cout<<"there is only one value of k : "<<kmin;
        } 
        else cout<<-1;

    }
    else{
        if(kmin-(int)kmin>0)
        {
            kmin=(int)kmin+1;
        }
        cout<<"range of k is : ["<<kmin<<","<<(int)kmax<<"]"; // qki min ke lye upper bound lena hai
    }
    



    return 0;
}