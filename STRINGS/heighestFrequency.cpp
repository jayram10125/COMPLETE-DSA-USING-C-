// check which charecter occures more time
// lekin ye bahut bekar tarika hai karne ka
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="jaycodingclasses";
    
    int max=0;
    //char max_char ;
    for(int i=0;i<s.length();i++)
    {
        
        char ch =s[i];
        int count =1;
        //char ch1;
        
        for(int j=i+1;j<s.length();j++)
        {
            if(s[j]==s[i]) {
                count++;
                //ch1=s[j];

            }
        }
        if(max<count) 
        {
            max=count;
            //max_char=ch1;
        }

    }

    for(int i=0;i<s.length();i++)
    {
        
        char ch =s[i];
        int count =1;

        
        for(int j=i+1;j<s.length();j++)
        {
            if(s[j]==s[i]) {
                count++;
            

            }
        }
        if(count==max) 
        {
           cout<<ch<<" "<<max<<endl;
        }

    }
    
    
    

}