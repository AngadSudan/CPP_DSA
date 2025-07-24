#include <bits/stdc++.h>
using namespace std;
class Calculator{

    public:
        int add(int a, int b) { return a+b;}
        double add(double a, double b) { return a+b;}
        int subtract(int a, int b) { return a-b;}
        double subtract(double a, double b) { return a-b;}
        int multiply(int a, int b) { return a*b;}
        double multiply(double a, double b) { return a*b;}
        int remainder(int a, int b) { return a%b;}
        double division(double a, double b) {
            if(b==0) return -1.0; 
            return a/b;}
};

int main(){
    Calculator c1;
    cout<<c1.add(1.1,2.2)<<endl;
}