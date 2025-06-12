#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

};
int main(){
    //10 20 30 40
    Node a;
    a.val=10;
    Node b,c,d;
    b.val=20;
    c.val=30;
    d.val=40;

    // forming Linkedlist
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;


    return 0;
}