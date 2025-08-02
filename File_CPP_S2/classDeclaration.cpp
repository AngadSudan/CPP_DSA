/*Write a C++ program to 
declare a class . Declare 
pointer to class. Initialize 
and display 
the contents of the class 
members */
#include<bits/stdc++.h>
using namespace std;

class DeclaredClass {
    int a=1000;
    public:
        DeclaredClass(){
            cout<<"class has been initiated"<<endl;
        }
        void display(){
            cout<<this->a<<endl;
        }
};

int main(){
    DeclaredClass* a = new DeclaredClass();
    a->display();
    return 0;
}