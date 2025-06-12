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
int main(){
    Node a(10);
    Node b(20);
    Node c(30) , d(40);

    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<c.val<<endl;
    cout<<d.val<<endl;

    cout<<"Addresses before linking"<<endl;
    cout<<a.next<<endl;
    cout<<b.next<<endl;
    cout<<c.next<<endl;
    cout<<d.next<<endl;

    a.next=&b;  // a.next agar address store kar raha hai to means ki a.next ek pointer hai
    b.next=&c;
    c.next=&d;
    // d.next=NULL;

    cout<<"Addresses after linking"<<endl;
    cout<<a.next<<endl;
    cout<<b.next<<endl;
    cout<<c.next<<endl;
    cout<<d.next<<endl;


    // kuch harkate  b ko a ke help se print karana

    cout<<"harkate"<<endl<<endl;
    Node* ptr = &b;
    // cout<<(*ptr).val;
    cout<<ptr->val<<endl;
    cout<<ptr->next<<endl;
    cout<<&c;


    cout<<endl<<endl;
    a.next=&b;  // a.next agar address store kar raha hai to means ki a.next ek pointer hai
    

    cout<<(*(a.next)).val<<endl;
    a.next->val=70; // similar as     (*(a.next)).val
    cout<<a.next->val<<endl;
    cout<<b.next->val<<endl;
    cout<<c.next->val<<endl;
    cout<<d.val<<endl<<endl;


    cout<<"a ke help se sidhe d ki value ko print karana"<<endl;

    cout<<(*(*(*a.next).next).next).val<<endl;
    cout<<"method 2 "<<endl;
    cout<<(((a.next)->next)->next)->val<<endl;


    cout<<"printing the linkedlist"<<endl;

    Node temp = a;

    while(temp.next!=NULL){
        cout<<temp.val<<" ";
        temp=(*(temp.next));
    }
    cout<<endl;
    cout<<"abhi last node nahi print ho raha hai ek change karna hai bass"<<endl<<endl;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
    cout<<endl;





    return 0;
}