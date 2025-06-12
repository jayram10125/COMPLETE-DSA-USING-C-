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

    cout<<&a<<endl;
    cout<<a.next<<endl;// abhi kuch bhi random address aa jayega


    //now storing the address by NULL (bekar tarike se  better tarika ki hum constructor ka help le result same rahega)
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    cout<<&a<<endl;
    cout<<a.next;  //  abb null address aayega
    
    



    return 0;
}