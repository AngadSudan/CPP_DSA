#include <bits/stdc++.h>
using namespace std; 

class Overload {
    void add(){}
    void add(int a, int b){ cout<<a+b<<endl;}
    void add(int a, int b, int c){ cout<<a+b+c<<endl;}
    void add(float a, int b){ cout<<a+b+<<endl;}
    void add(float a, float b){ cout<<a+b+<<endl;}
}

int main(){
    Overload a;
    a.add();
    a.add(2,3);
    a.add(1,2,34);
}