//(Upper  bound) Given an sorted integer array and an integer ‘x’ , find the upper bound of x. 
#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=20;
    //normal techniques T.C=O(n)
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x){
            cout<<arr[i];
            break;
            
        }
    }



    return 0; 
}