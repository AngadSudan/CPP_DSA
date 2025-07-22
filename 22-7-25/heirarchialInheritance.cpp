#include <bits/stdc++.h>
using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    Employee(int id, string name) {
        this->id = id;
        this->name = name;
    }

    void show() {
        cout << this->id << " and the name is " << this->name << endl;
    }
};

class Manager : public Employee {
    string dept;

public:
    Manager(int id, string name, string dept) : Employee(id, name) {
        this->dept = dept;
    }

    void show() {
        cout << this->id << " and the manager is " << this->name << " for department " << this->dept << endl;
    }
};

class Developer : public Employee {
protected:  // <-- Changed from private to protected
    string techstack;

public:
    Developer(int id, string name, string techstack) : Employee(id, name) {
        this->techstack = techstack;
    }

    void show() {
        cout << this->id << " and the developer is " << this->name << " for stack " << this->techstack << endl;
    }
};

class Intern : public Employee {
    string duration;

public:
    Intern(int id, string name, string duration) : Employee(id, name) {
        this->duration = duration;
    }

    void show() {
        cout << this->id << " and the intern is " << this->name << " for duration " << this->duration << endl;
    }
};

class SeniorDev : public Developer {
    int experience;

public:
    SeniorDev(int id, string name, string techstack, int experience) : Developer(id, name, techstack) {
        this->experience = experience;
    }

    void show() {
        cout << "The experience of the developer is " << this->experience << " years" << endl;
    }
};

class AssociateDev : public Developer {
    string desc;

public:
    AssociateDev(int id, string name, string techstack, string desc) : Developer(id, name, techstack) {
        this->desc = desc;
    }

    void show() {
        cout << "The associate developer is " << this->name
             << " for stack " << this->techstack
             << " with description: " << this->desc << endl;
    }
};

int main() {
    Employee e(1, "Alice");
    Manager m(2, "Bob", "Sales");
    Developer d(3, "Charlie", "C++");
    Intern i(4, "Dave", "6 months");
    SeniorDev sd(5, "Eve", "Python", 10);
    AssociateDev ad(6, "Frank", "Java", "Junior Developer");

    e.show();
    m.show();
    d.show();
    i.show();
    sd.show();
    ad.show();

    return 0;
}
