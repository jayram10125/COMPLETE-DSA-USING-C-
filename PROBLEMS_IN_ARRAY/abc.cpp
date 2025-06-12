#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
	// int e[5]={7,0,5,1,3};
	// int l[5]={1,2,1,3,4};
    int e[5]={3,5,2,0};
	int l[5]={0,2,4,4};
    int n=4;
	
	
	int res=0;
	for(int i=0;i<n;i++){
		res=res+(e[i]-l[i]);
        v.push_back(res);
		
	}
    int max=v[0];
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
        }
    }

	cout<<max;
   return 0;
}