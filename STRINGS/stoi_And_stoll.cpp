//stoi_stoll inbuilt function :) stoi--> string to int &&& stoll--> string to long long
// string ko integer banayenge tostring me integer ki string banate hain
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
   string str = "123456";
   int x = stoi(str);
   cout<<x;
   
}