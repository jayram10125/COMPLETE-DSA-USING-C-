//stoi_stoll inbuilt function :) stoi--> string to int &&& stoll--> string to long long
// string ko integer banayenge tostring me integer ki string banate hain
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
   string str = "123456"; // agar "00000007632546" ye koi number hai to x me sirf 7632546 hi store hoga aage ke zero ko leading zero kahate hain and ye store nahi hota hai
   int x = stoi(str);
   cout<<x;
   
}