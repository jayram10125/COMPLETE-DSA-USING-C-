//bubble sort implementation
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,4,6,3,2,1};
    int n=6;
    //printing
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // for(int i=0;i<n-1;i++){  // n-1 pass
    //     //travers
    //     for(int j=0;j<n-1-i;j++)//j<n-1 --> not efficient ofcourse kaam to karega hi
    //     {
    //         if(arr[j]>arr[j+1])//swap
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }

    // }

    // bubble sort optimized
    bool flag=true;
    for(int i=0;i<n-1;i++){  // n-1 pass
        //travers
        for(int j=0;j<n-1-i;j++)//j<n-1 --> not efficient ofcourse kaam to karega hi
        {
            if(arr[j]>arr[j+1])//swap
            {
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){// swap did't happen
            break;
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