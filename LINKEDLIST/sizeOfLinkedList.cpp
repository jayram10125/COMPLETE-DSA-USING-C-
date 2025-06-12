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
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int size(Node* head){
    Node* temp = head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
        
    }
    return n;
}
int main(){
    Node* a  = new Node(10); 
    Node* b  = new Node(20);
    Node* c  = new Node(30);
    Node* d  = new Node(40);
    Node* e  = new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    cout<<"displaying the linkedlist"<<endl;

    display(a);
    cout<<endl;
    cout<<"size of linkedlist"<<endl;
    cout<<size(a);

    return 0;
}