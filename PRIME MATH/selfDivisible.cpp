#include<iostream>
#include<vector>
using namespace std;
vector<int> selfDividingNumbers(int left, int right) {
    vector<int> v;
    for(int i=left;i<=right;i++){
        int n=i;
        bool flag ;
        while(n>0){
            flag=false;
            int rem=i%10;
            if(rem==0) break;
            if(n%rem==0){
                flag=true;
                n=n/10;
            }
        }
        if(flag==true){
            
            v.push_back(i);
        }

    }
    return v;
    
}
int main()
{
    vector<int> v = selfDividingNumbers(1,22);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
