//merge two sorted array
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& v1 ,vector<int>& v2)
{
    int n=v1.size();
    int m=v2.size();
    vector<int> res(m+n);
    int i=0;//v1
    int j=0;//v2
    int k=0;//res
    while(i<=n && j<=m)
    {
        if(v1[i]<v2[j])
        {
            res[k]=v1[i];
            i++;
            k++;
        }
        else
        {
            res[k]=v2[j];
            j++;
            k++;               //dono block me k++ hai to ise redundency bhi kahate hai isse bachne ke lye sabse last me likh sakte hain but compulsary nahi hai
        }
    }
    //for remaining element
    if(i==n){  // v1 ke sare element aa chuka hai
    while(j<=m-1){
        res[k]=v2[j];
        k++;
        j++;

    }

    if(j==m){    //v2 ke sare element aa chuka hai 
        while(i<n-1){
            res[k]=v1[i];
            k++;
            i++;
        }
    }

    }

    return res;
}
int main()
{
    vector<int> v1; //1,4,5,8
    
    
    v1.push_back(1); 
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);

    vector<int> v2; //2,3,6,7,10,12
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);
    int n=v1.size();
    int m=v2.size();

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"  ";
    }
    cout<<endl;

    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<"  ";
    }
    cout<<endl;
    
    vector<int> v=merge(v1,v2);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }

    
   
}