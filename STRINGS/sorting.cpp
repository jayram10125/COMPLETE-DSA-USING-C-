//sorting the string  --> it happes according to ascii value
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s= "name";
    sort(s.begin(),s.end());
    cout<<s;
    

}