#include <bits/stdc++.h>
using namespace std;

class Outer{
    static int count;
    public:
        Outer(){
            count++;
        }
        void accessInner(){
            Inner i;
            i.accessOuter();
            cout<< "inner data is: "<<i.innerCount;
        }

        class Inner{
            static int innerCount;
            Inner(){
                this->innerCount++;
            }
            public:
            void accessOuter(){
                cout<<"outer data is: "<<Outer::count << endl;
            }
            
            friend class Outer;
        };
};

int main(){
    Outer a;
    a.accessInner();
}