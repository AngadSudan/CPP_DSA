#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

class Account {
    protected:
        int accountNumber;
        string name;
        double balance;
    public:
        Account(int accountNumber, string name, double balance){
            this->accountNumber= accountNumber;
            this->balance = balance;
            this->name = name;
        }
        virtual ~Account(){
            cout<<"Account number "<< this->accountNumber<<"has been removed"<<endl;
        }
        bool isValidTransaction(int amount){
            return amount<=this->balance;
        }
        int getAccountNumber() const {return this->accountNumber;}

        virtual void addInterest()=0;
        virtual void depositMoney(double balance) =0;
        virtual void withdrawMoney(double balance) =0;
        virtual void getDetails()=0;
};

#endif