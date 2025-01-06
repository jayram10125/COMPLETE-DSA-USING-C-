// method 2 : two pointer method
// agar aapko kaha jaye ki array pe ek baar hi traverse karna hai
#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int>& v)
{
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(v[i]==0)
        {
            i++;
        }
        if(v[j]==1)
        {
            j--;
        }
        if(i>j) // is statement ke bina bhi bahut sare input pe ye code proper run karega but kuch specific input pe ye sahi se run nahi karega jaise ke upar ke example pe sahi se run nahi karega ager dry run properly karke dekho to problem kya hai samajh aa jayega. agar aap ye nahi karna chahate hain to aap thord wale if ko jaha pe swap hua hai usko sabse pahle likho to bhi sahi se code kaam karega.ya to else if laga ke kar lo
        {
            break;
        }
        if(v[i]==1 && v[j]==0)
        {
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
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