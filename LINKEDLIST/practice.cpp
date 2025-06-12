#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
    }
};
int main(){
    // Node a;
    // a.data=10;
    // Node b;
    // b.data=20;
    // Node c;
    // c.data=30;
    // Node d;
    // d.data=40;
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);


    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;





    return 0;
}