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
    cout<<a.next<<endl;// abhi kuch bhi random address aa jayega


    //now storing the address by NULL (bekar tarike se)
    a.next=NULL;
    b.next=NULL;
    c.next=NULL;
    d.next=NULL;

    cout<<&a<<endl;
    cout<<a.next;  //  abb null address aayega
    
    



    return 0;
}