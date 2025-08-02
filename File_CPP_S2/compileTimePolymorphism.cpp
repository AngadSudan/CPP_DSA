#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    float add(float a, float b) {
        return a + b;
    }
    
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Calculator calc;
    cout << "Compile-time Polymorphism:" << endl;
    cout << "Sum of 5 + 3 = " << calc.add(5, 3) << endl;
    cout << "Sum of 3.5 + 2.7 = " << calc.add(3.5f, 2.7f) << endl;
    cout << "Sum of 1 + 2 + 3 = " << calc.add(1, 2, 3) << endl;

    cout << "\nRuntime Polymorphism:" << endl;
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();
    
    shape1->draw();  
    shape2->draw();  
    
    delete shape1;
    delete shape2;
    
    return 0;
}