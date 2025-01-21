// push zeros to end while maintaining the relative order of other element
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n=9;
    //printing
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
    for(int i=0;i<n-1;i++){  // n-1 pass
        //travers
        for(int j=0;j<n-1-i;j++)//j<n-1 --> not efficient ofcourse kaam to karega hi
        {
            if(arr[j]==0)//swap
            {
                swap(arr[j],arr[j+1]);
                
            }
        

        }
    }
    //printing after sort
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
