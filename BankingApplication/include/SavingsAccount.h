#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"


class SavingsAccount: public Account {
    protected:
        const string accountType = "SAVINGS";
        const double interestRate = 9.2;
    public:
        SavingsAccount(int accountNumber, string name, double balance):Account(accountNumber,name,balance){}
        void depositMoney(double amount)  override {
            this->balance += amount;
            cout<< "[DEPOSIT]: Amount has been added to your account"<<endl;
        };
        void withdrawMoney(double amount) override {
            if(!this->isValidTransaction(amount)){
                cout<<"Trying to perform a invalid transaction" << endl;
                return ;
            }
            this->balance += amount;
            cout<< "[WITHDRAW]: Amount has been withdrawn to your account"<<endl;
        };
        void getDetails() override{
            cout<<"[SAVINGS BALANCE]: Amount in money is - "<< this->balance << endl; 
        }
        void addInterest() override{
            int latestInterest = (this->balance * this->interestRate ) / 12 ;
            this->balance += latestInterest;
            cout<< "[ADDED INTEREST]: the amount of interest added is " << latestInterest << endl;
        }
};


#endif