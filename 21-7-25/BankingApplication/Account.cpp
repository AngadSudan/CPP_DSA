#include <iostream>
#include <string>

#ifndef ACCOUNT_H
#define ACCOUNT_H

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

int main(){
    return 0;
}

#endif
