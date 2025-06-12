#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
    }

};
int main(){
    // creating node and storing the only data
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    cout<<&a<<endl;
    cout<<a.next<<endl;  // abhi koi bhi garbage value node a ke next me store hai


    //now storing the address
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    cout<<&b<<endl;
    cout<<a.next;
    
    



    return 0;
}