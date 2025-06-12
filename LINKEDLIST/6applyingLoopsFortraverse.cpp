//filling all the next part by NULL using constructor
#include<iostream>
using namespace std;
class Node{  // ye abb proper node ban chuka hai
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
int main(){
    // creating node and storing the only data
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);



    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    Node temp=a; // a ki dono chize value and address temp me bhi store ho gya hai but temp ka self address different hai.
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break; 
        temp = (*(temp.next));// temp .next point to address of b i.e stored in node a and *temp.next batayege ki iss address pe jo kuch bhi pada hai usko temp me abb store kar do
        
    }

    

    
    
    



    return 0;
}