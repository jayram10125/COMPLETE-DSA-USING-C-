#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    } 

};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
// method 2  -> temp banane ki need hi nahi hai
// void display(Node* head){
    
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
// }
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    display(a);

    return 0;
}