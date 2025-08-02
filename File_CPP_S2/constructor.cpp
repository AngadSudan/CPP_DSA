#include<bits/stdc++.h>
using namespace std;
class Student;
class StudentAccesser{
    public:
    void showInfo(Student& s);
};
class Student{
    int age;
    string name;
    public:
        Student(int age, string name){
            this->age=age;
            this->name = name;
        }
        ~Student(){
            cout<<"deleted user" << this->name << endl; 
        }

        friend void StudentAccesser::showInfo(Student&);
};

void StudentAccesser::showInfo(Student& s){
    cout<< s.age << " "<< s.name << endl;
}
int main(){
    Student s(1,"angad");
    StudentAccesser a;
    a.showInfo(s);
    return 0;
}