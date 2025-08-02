#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByValue: x = " << x << ", y = " << y << endl;
}

void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByReference: x = " << x << ", y = " << y << endl;
}

int main() {
    cout << "Function Overloading:" << endl;
    cout << "Add integers: " << add(5, 3) << endl;
    cout << "Add doubles: " << add(3.7, 2.3) << endl;

    int a = 10, b = 20;
    cout << "\nCall by Value:" << endl;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapByValue(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    cout << "\nCall by Reference:" << endl;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}