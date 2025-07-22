#include <bits/stdc++.h>

using namespace std;

class Person {
    string name;
    int age;
public:
    void setName(const string& name) {
        this->name = name;
    }
    string getName() const {
        return name;
    }
    void setAge(int age) {
        this->age = age;
    }
    int getAge() const {
        return age;
    }
};

class TaxPayer {
    int pan;
public:
    void setPan(int pan) {
        this->pan = pan;
    }
    int getPan() const {
        return pan;
    }
};

class Employee: public person,TaxPayer {
    int empId;
    int salary;
    public:
        void setEmployee(int empId, int salary){
            this->empId= empId;pp
            this->salary = salary;
        }
};

int main(){
    Employee e();
    e.
}