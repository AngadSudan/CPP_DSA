#include <bits/stdc++.h>
using namespace std;
class Outer {
    int b;
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
        friend class Outer;
    };
    
};

int main(){
    Outer a;
    a.showA(123);
}