//given n strings consisting of digits from 0 to 9 . return the index of string which has maximum  Value .(take 0 based indexing)                               

#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
   string arr[]={"0123","0023","456","00182","940","002901"};
   int max=stoi(arr[0]);
   
   for(int i=1;i<=5;i++)
   {
        int x=stoi(arr[i]);
        if(x>max)   
        {
            max=x;   

        }
   }
   cout<<max;
   
 
   
}