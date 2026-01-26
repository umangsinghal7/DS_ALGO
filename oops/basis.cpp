#include <iostream>
#include <string>
using namespace std;
class Student{
public:
    int rno;
    string name;
    float gpa;

    Student(){     
                  //default constructer
    }

    Student(int r,string n){
        rno=r;
        name=n;                 //parameterised constructor
        
    }

    Student(int r,string n,float g){
        rno=r;
        name=n;                 //parameterised constructor
        gpa=g;
    }

    Student(float gpa,string name,int rno){
        this->rno=rno;
        this->name=name;                //this keyword for avoiding same name confusion of compiler
        this->gpa=gpa;                //parameterised constructor

       
    }
    void print(int a){
           cout<<this->name<<" "<<this->rno<<" "<<this->gpa<<endl;
           cout<<a<<endl;

       } 
      
    int grace(){
        return gpa+1;
    }
};
 void change(Student* s){
           s->name="yash";          //object pointer
       }
int main() {
    Student s1(123,"umang");
    // student s1;
    // s1.rno=123;
    // s1.name="umang";
    s1.gpa=4.0;

    Student s2;
    s2.rno=124;
    s2.name="uma";
    s2.gpa=7.0;

    Student s3(123,"mang",8.9);
    Student* s4 = new Student(7.9,"ang",692);


    Student s5=s1;              //deep copy
    Student s6(s2);             //copy consturctor-->deep copy

    // cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    // cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    // cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    // cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;
    // cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl;
    // cout<<s6.name<<" "<<s6.rno<<" "<<s6.gpa<<endl;

    s1.print(18);
    s2.print(18);
    s3.print(18);
    s4.print(18);
    s5.print(18);
    change(&s6);
    s6.print(18);

    cout<<s1.grace()<<endl;

    


}
