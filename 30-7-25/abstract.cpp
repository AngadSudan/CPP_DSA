#include <bits/stdc++.h>
using namespace std;

//abstract class
// class Vechile{
//     virtual void brake()=0; // pure virtual Function
//     virtual void clutch()=0; // pure virtual Function
//     virtual void accelerate()=0; // pure virtual Function
//     virtual void steering()=0; // pure virtual Function
// }

class Employee{
    protected:
        string name;
        int empId;
        double baseSalary;
        static int employeeCount;
    public:
        Employee(string name, int empId, double baseSalary) 
            : name(name), empId(empId), baseSalary(baseSalary) {
            employeeCount++;
        } 
};
int main(){
    Employee e;
    
    return 0;
}