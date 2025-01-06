//Sort zero's and one's
//matlab ki ek array me sirf zero and one hoga usse  sort karna hai ofcourse sort function ke help se kar sakte hai waise nahi karna hai

// method 1 : two pass method
#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int>& v)
{
    int n=v.size();
    int no_0=0;
    int no_1=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            no_0++;
        }
        else
        {
            no_1++;
        }
    }
    //filling the elements
    for(int i=0;i<n;i++)
    {
        if(i<no_0)
        {
            v[i]=0;
        }
        else
        {
            v[i]=1;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    cout<<"orignal array is : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


    sortZeroAndOne(v);

    //printing the sorted array
    cout<<"sorted array is : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    
    
    
    return 0;   
} 

