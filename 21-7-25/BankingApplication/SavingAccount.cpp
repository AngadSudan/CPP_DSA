#include <bits/stdc++.h>
using namespace std;

class Account {
    protected:
        string accountHolder;
        double balance;

    public:
        Account(string name, double balance) {
            this->accountHolder = name;
            this->balance = balance;
        }

        void display() {
            cout << "Account Holder: " << accountHolder << ", Balance: " << balance << endl;
        }
};

class SavingAccount : public Account { 
    string accountType;

    public:
        SavingAccount(string name, double bal) : Account(name, bal) {
            accountType = "savings";
        }

        void display() {
            cout << "Account Holder: " << accountHolder << endl;
            cout << "Balance: " << balance << endl;
            cout << "Account Type: " << accountType << endl;
        }
};

int main() {
    SavingAccount a("angad", 0);
    a.display();
    return 0;
}
