#include <bits/stdc++.h>

using namespace std;

class FirstBaseClass{
    int var1, var2;
    public:
        FirstBaseClass(int var1, int var2){
            this->var1= var1;
            this->var2 = var2;
        }

        void baseDisplay(){
            cout<< this->var1 << " " <<this->var2 << endl;
        }
};

class SecondLevelClass : public FirstBaseClass{
    int var3;
    public:
        SecondLevelClass(int var1, int var2, int var3) : FirstBaseClass(var1, var2){
            this->var3= var3;
        }

        void secondDisplay(){
            cout<<"display from second class " << this->var3<< endl;
        }
};

class ChildClass: public SecondLevelClass {
    int var4;
    public:
        ChildClass(int var1, int var2, int var3, int var4): SecondLevelClass(var1,var2,var3){
            this->var4= var4;
        }
        void childDisplay(){
            cout<<"display from child class " << this->var4 << endl;
        }

};


int main(){
    ChildClass a(3,4,5,6);
    a.baseDisplay();
    a.secondDisplay();
    a.childDisplay();
}