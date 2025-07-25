#include <bits/stdc++.h>
using namespace std;

void addByValue(int a , int b) {
    a= a + b ;
    cout<<a<<endl;
}
void addByReference(int &a , int &b) {
    a= a + b ;
    cout<<a<<endl;
}

int main(){
    int x = 10;
    int y = 12;
    addByValue(x,y);
    cout<< x << " after call nby value ";
    addByReference(x,y);
    cout<< x << " after call by reference ";
}