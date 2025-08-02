#include<bits/stdc++.h>
using namespace std;

class StaticClass {
    static int a;
    public:
        StaticClass(){
            a++;
        }
        static void showA(){
            cout<< StaticClass::a << endl;
        }
};

int StaticClass::a = 0;  
int main(){
    StaticClass a;
    StaticClass b;
    
    cout<<"both shows same value"<<endl;
    a.showA();
    b.showA();
    cout << endl;
    return 0;
}