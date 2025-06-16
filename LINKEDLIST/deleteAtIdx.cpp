#include<iostream>
using namespace std;
class Node{    // user defined data types
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
class LinkedList{  // // user defined data structure
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        
        if(idx<0 || idx>size) cout<<"invalid index";
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int  i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }

    }

    void updateAtIdx(int idx,int val){
        Node* temp = head;
        for(int  i=1;i<=idx;i++){
                temp=temp->next;
            }
            temp->val=val;

    }

    int getAtIdx(int idx){
        if(idx<00 || idx>size){
            cout<<"invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp =head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    
    void deleteAthead(){
        if(size==0){
            cout<<"your list is empty";
            return;
        }
        else{
            head=head->next;
            size--;
        }
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"your list is empty";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtidx(int idx){
        if(size==0){
            cout<<"your list is empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"invalid index!";
        }
        else if(idx==0){
            return deleteAthead();
        }
        else if(idx==size-1){
            return deleteAtTail();
        }
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next=temp->next->next;
            size--;
            
        }

    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList ll ;
    ll.insertAtEnd(10); //{10->NULL}
    ll.display();
    ll.insertAtEnd(20);//{10->20->NULL}
    ll.display();
    ll.insertAtEnd(30);//{10->20->30->NULL}
    ll.insertAtEnd(40);//{10->20->30->40->NULL}
    ll.display();
    
    ll.insertAtHead(50);//{50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(60);//{60->50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtIdx(4,80); //{60->50->10->20->80->30->40->NULL}
    ll.display();
    ll.insertAtIdx(7,90); //{60->50->10->20->80->30->40->90->NULL}
    ll.display();

    cout<<ll.getAtIdx(2);
    cout<<endl;
    cout<<ll.getAtIdx(12)<<endl;
    ll.updateAtIdx(4,33); //{60->50->10->20->80->30->40->NULL}
    ll.display();
    ll.deleteAthead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtidx(3);
    ll.display();
    
    
    


    


    return 0;
}