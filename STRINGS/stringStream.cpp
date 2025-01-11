//string stream 

#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str = "i am the mentor of jay coding classes";
    stringstream  ss(str);
    string temp;

    while(ss>>temp){//ss me se sub-string lelo temp me

        cout<<temp<<endl;
    }
    
    
    
    

}