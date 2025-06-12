#include<iostream>
using namespace std;
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int n=7;
    int k=3;
    for(int j=0;j<k;j++){
        int first=arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=first;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}