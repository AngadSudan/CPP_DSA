#include <bits/stdc++.h>
using namespace std;
class Outer {
    int b=100;
    public:
    void showA(int initializer){
        Inner i(initializer);
        cout<<i.a;
    }
    class Inner {
        int a;
        public:
        Inner(int a){
            this->a = a;
        }
        void show(Outer& o){
            cout<<o.b;
        }
        friend class Outer;
    };
    friend class Inner;
};
int main(){
    Outer a;
    Outer::Inner b(20);
    b.show(a);  
}