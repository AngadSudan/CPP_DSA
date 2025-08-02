#include <bits/stdc++.h>
using namespace std;

class A{
    int a;
    protected:
        int b;
    public:
        A(){
            this->a=100;
            this->b=200;
        }
        friend void show(A& a1);
};
void show(A& a1){
    cout<< a1.a << " " << a1.b << endl;
}
int main(){
    A a1;
    show(a1);
}