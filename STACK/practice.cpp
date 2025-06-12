#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(54);
    st.push(32);
    st.push(64);
    st.push(22);
    for(int i=1;i<=3;i++){
        st.pop();
    }
    // st.pop();
    // st.pop();
    // st.pop();
    
    cout<<st.top()<<endl;
    





    return 0;

}