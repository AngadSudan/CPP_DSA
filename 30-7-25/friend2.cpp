#include<bits/stdc++.h>
using namespace std;

class A;
class B{
    public:
        void show(A& a2);
};
class A{
    int a;
    public:
        A(){
            this->a=100;
        }
        friend void B::show(A& a1);
};
void B::show(A& a3){
    cout<< a3.a << endl;
}

int main(){
    A a1;
    B b2;
    b2.show(a1);
    return 0;
}