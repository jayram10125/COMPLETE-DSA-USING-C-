#include<iostream>
#include<string.h>
using namespace std;

class Student{   // user defined data types
    public:
    
    string name;
    int rno;
    float marks;

    // Student(string n,int r,float m){
    //     name=n;
    //     rno=r;
    //     marks=m;

    // }
    Student(string name,int rno,float marks){
        this->name=name;
        this->rno=rno;
        this->marks=marks;//similar as (*this).marks=marks

    }

};
void change( Student s){
    s.name="kumar";
}

void changeRef( Student &s){
    s.name="kumar by Ref";
}

void changeAnotherWay(Student *s){
    s->name="kalu";
}
int main(){
    Student s("jay",92,1323409); // similar as int x  --> yaha int data type hai and x variable ka name similar Student user defined data types hai and s variable ka name

    // Student s1;

    // s.name="jay ram Kumar";
    // s.marks=92;
    // s.rno=1323409;

    cout<<s.name<<endl;
    s.name="ram";  // changing name normally
    cout<<s.name<<endl;

    change(s);// changing name using function
    cout<<s.name<<endl;   // function ke help se to koi change aaya hi nahi means ki ye jo behaviour hai ye pass by value ke karan ho raha hai


    changeRef(s);// changing name using function(reference)
    cout<<s.name<<endl;

    // cout<<s1.marks;  // agar kuch assign nahi karenge to garbage value aa jayegi  to isko manage karne ke lye constructor ko use kar sakte hain;


    cout<<endl<<endl<<"Playing with pointers"<<endl;

    Student * ptr=&s;
    (*ptr).name="raghav";  //bracket dena hota hai
    cout<<s.name<<endl;
    ptr->name="sonu";   // same kaam karega ye bass ek another method hai

    //(to yaha se samjo ki this is nothing bass ek reference variable hai uske  " this-> " ke jagah pe " *this." bhi likh sakte hain)
    cout<<s.name<<endl;

    changeAnotherWay(&s);
    cout<<s.name<<endl;


    cout<<"another method to initialize "<<endl<<endl;

    Student *s1 = new Student("ladoo",1323409,92);

    cout<<s1->name<<endl;
    changeAnotherWay(s1);
    cout<<s1->name<<endl;



    return 0;
}