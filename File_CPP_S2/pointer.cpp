/* Concept of a Pointer, 
Declaring and 
Initializing Pointer 
Variables and Pointer 
Expressions  */

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;    
    
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value ptr points to: " << *ptr << endl;
    
    *ptr = 20;
    cout << "New value of num: " << num << endl;
    
    return 0;
}