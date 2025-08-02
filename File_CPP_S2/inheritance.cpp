#include <iostream>
using namespace std;

class Parent {
    private:
        int privateVar = 1;
    protected:
        int protectedVar = 2;
    public:
        int publicVar = 3;
        
        void showData() {
            cout << "Private: " << privateVar << endl;
            cout << "Protected: " << protectedVar << endl;
            cout << "Public: " << publicVar << endl;
        }
};

class PublicDerived : public Parent {
    public:
        void access() {
            // privateVar is not accessible
            cout << "Protected var: " << protectedVar << endl;
            cout << "Public var: " << publicVar << endl;
        }
};

class PrivateDerived : private Parent {
    public:
        void access() {
            cout << "Protected var: " << protectedVar << endl;
            cout << "Public var: " << publicVar << endl;
        }
};

class ProtectedDerived : protected Parent {
    public:
        void access() {
            cout << "Protected var: " << protectedVar << endl;
            cout << "Public var: " << publicVar << endl;
        }
};

int main() {
    cout << "Demonstrating Inheritance Modes:\n\n";
    
    PublicDerived pub;
    cout << "Public Inheritance:\n";
    pub.access();
    pub.showData(); 
    PrivateDerived priv;
    cout << "\nPrivate Inheritance:\n";
    priv.access();
    
    ProtectedDerived prot;
    cout << "\nProtected Inheritance:\n";
    prot.access();
    return 0;
}