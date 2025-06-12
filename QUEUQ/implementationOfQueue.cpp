#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(45);
    q.push(67);
    q.push(89);
    q.push(70);

    cout<<"front : "<< q.front()<<endl;
    cout<<"rear  : "<< q.back()<<endl;

    q.pop();
    q.pop();
    cout<<"front : "<< q.front()<<endl;
    cout<<"rear  : "<< q.back()<<endl;




    return 0;
}