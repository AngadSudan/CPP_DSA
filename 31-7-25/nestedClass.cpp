#include <bits/stdc++.h>
using namespace std;

class Outer {
    int b;
    public:
    void getShowA(int initializer){
        Inner in(initializer);
        in.showA();
    }
    class Inner {
        int a;
        public:
            Inner(int a){
                this->a = a;
            }
            void showA(){
                cout<<this->a << endl;
            }
    };
};

int main(){
    Outer a;
    a.getShowA(123);
}