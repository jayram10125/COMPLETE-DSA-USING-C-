#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.push(5);
    cout<<st.top()<<endl;





    return 0;

}