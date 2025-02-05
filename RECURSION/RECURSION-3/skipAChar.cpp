// skip a character
// remove all occurrences of 'a' from a string
#include<iostream>
#include<string>
using namespace std;
   /* void removeChar(string ans,string original)
    {
        if(original.length()==0){
            cout<<ans;
            return;
        }
        char ch=original[0];
        if(ch=='a') removeChar(ans,original.substr(1));
        else removeChar(ans+ch,original.substr(1));

    }
    */
   // method 2 upar bale ka time and space complexity bahut hi bekaar hai
void removeChar(string ans,string original,int idx)
{
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);

}
int main()
{
    string str="jay ram kumar";
    string s="";
    // for(int i =0;i<str.length();i++)
    // {
    //     if(str[i]!='a') s.push_back(str[i]);
    // }
    // cout<<s;

    removeChar("",str,0);
    //cout<<str.substr(1) ye 1 element ko delete kar dega and baki sabko print kar dega

    return 0;
}