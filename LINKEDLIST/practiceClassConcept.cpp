#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }

};
void change(Student s1){
    s1.name="kumar";

    
}
void changeRef(Student &s2){
    s2.name="ladoo";
}
void changeRef2(Student *s2){
    (*s2).name="mousham";
}
int main(){
    Student s("ram",1,90.5);
    // s1.name="kumar";
    // s1.rno= 1323409;
    // s1.marks=91.6;
    
    

    cout<<s.name<<endl;
    change(s);
    cout<<s.name<<endl;
    changeRef(s);
    cout<<s.name<<endl;
    changeRef2(&s);
    cout<<s.name<<endl;
    

    // cout<<s1.rno<<endl;
    // cout<<s1.marks<<endl;


    cout<<endl<<endl;

    // another way to initialize
    Student *s1 = new Student("buchi",1324522,60.5);
    cout<<(*s1).name<<endl;
    cout<<s1->marks<<endl;
    cout<<s1->rno<<endl;

    changeRef2(s1);
    cout<<s1->name;






}