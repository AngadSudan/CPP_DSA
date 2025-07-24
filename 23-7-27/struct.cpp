#include <bits/stdc++.h>

using namespace std;

struct Employee {
    int id;
    string name;

    Employee(int id, string name){
        this->id= id;
        this->name= name;
    }
    void setData(int id, string name){
        this->id= id;
        this->name= name;
    }

    void getData(){
        cout<< id << " for " << name << " is" << endl; 
    }
};

int main(){
    Employee e1(94,"angad");
    e1.getData();
}