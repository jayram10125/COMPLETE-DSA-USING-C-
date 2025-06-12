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

    // b ki value ko print karao

    cout<<b.val<<endl;

    // Node*ptr=&b;
    // cout<<(*ptr).val<<endl; // printting the value of b 

    // (*ptr).val=60;  // updating b by 60

    // cout<<(*ptr).val<<endl;
    
    // ptr->val=70;// hum (*ptr).   ke jagah ptr-> ye bhi use kar sakte hain

    //( humne upar me jo bhi harkat kya hai uske lye humne alag se poiinter banaya hai but ye karne ki kya jarurat hai (a.next) ek pointer hi to hai qki b ka address to a ke next i.e (a.next) me store hai matlab ki a.next is a pointer)
    
    // b ki value ko a ki madad se print karana

    cout<<(*(a.next)).val<<endl;

    // updating b via a
    (*(a.next)).val=33;
    cout<<(*(a.next)).val<<endl;
    // same kaam arrow operator se bhi kar hi sakte hain
    cout<<a.next->val<<endl;

    //updating b by a
    a.next->val=99;
    cout<<a.next->val<<endl;

    // c ki value ko print karo

    cout<<b.next->val;

    // bhai kar  kya rahe ho agar bahut badi list rahegi to kya tum ek ek karke sabko access karoge to kya koi upai hai jisse ki sirf a ke helpse sarer node ko print kara sako

    cout<<" \na ki help se c ki value ko print karana : "<<endl;

    cout<<((a.next)->next)->val<<endl;// (*((*((*(a.next)).next)).next)).val
    // wow abb to d ko bhi access kar sakte hain

    cout<<(((a.next)->next)->next)->val<<endl; // but suppose karo ki  aapke pass 200 node hai ya usse bhi jyada hai to kya aap humesa ye karoge ofcourse not to hum loop chalayenge


    
    
    



    return 0;
}