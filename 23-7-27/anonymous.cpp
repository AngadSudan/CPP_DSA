#include <iostream>
class {
    public:
        void greet() {
            std::cout << "Hello from an anonymous class!" << std::endl;
        }
    } anonObj;
int main() {
    anonObj.greet();

    return 0;
}