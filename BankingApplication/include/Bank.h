#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <vector>

#include "Account.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"

using namespace std;


class Bank {
    private:
    vector<Account*> accounts;
    public:
        int getNumberOfAccount(){
            return accounts.size();
        }
        void showMenu();
        void createAccount();
        void viewAccount();
        void depositMoney();
        void withdrawMoney();
        void deleteAccount();
        ~Bank(){
            cout<< "bank gone bankrupt"<< endl;
        }
};  


#endif