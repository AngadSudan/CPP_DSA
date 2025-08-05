#include "../include/Bank.h"
#include "../include/CurrentAccount.h"
#include "../include/SavingsAccount.h"
#include <iostream>

using namespace std;

void Bank::showMenu(){
    int choice;
    do{
        cout << "\n ==== Welcome to Random Bank ====\n";
        cout << "1. Create Account\n";
        cout << "2. View Account Details\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Delete Account\n";
        cout << "6. Exit\n";
        cout << "Enter your choice\n";
        cin >> choice;
        switch (choice){
            case 1:
                createAccount();
                break;
            case 2:
                viewAccount();
                break;
            case 3:
                depositMoney();
                break;
            case 4:
                withdrawMoney();
                break;
            case 5:
                deleteAccount();
                break;
            case 6:
                cout << "Thanku for using Random bank!\n";
                break;
            default:
                cout << "Invalid Option. Try again.\n";break;
        }
    } while (choice!=5);
}
void Bank::createAccount(){
    int AccountType;
    cout<< "What is the account Type that you want [1- Savings, 2-Current]: ";
    cin >> AccountType;

    Account* newAccount = nullptr;
    int accountNumber= Bank::getNumberOfAccount();

    string name;
    cout<<"Enter name: ";
    cin.ignore();
    getline(cin,name);

    double balance;
    cout<<"initial deposit amount is 100. Please submit the amount";

    char amountSubmitted;
    cout<<"enter y/n";
    cin>>amountSubmitted;

    if(amountSubmitted == 'n'){
        cout<<"[ACCOUNT CREATION ABORTED]";
        return ;
    }

    if(AccountType == 1){
        newAccount = new SavingsAccount(accountNumber, name, 100);
    }else{
        newAccount = new CurrentAccount(accountNumber, name, 100);
    }

    Bank::accounts.push_back(newAccount);
    cout<<"[ACCOUNT CREATED]"<< endl;
}
void Bank::viewAccount(){
    int AccountNumber;
    cout<< "Enter your Account Number: ";
    cin >> AccountNumber;

    if(AccountNumber >= Bank::getNumberOfAccount()){
        cout<<"no such account found"<<endl;
        return ;
    }
    Account* account = Bank::accounts[AccountNumber]; 
    account->getDetails();
    return ;
}
void Bank::depositMoney(){
    int AccountNumber;
    cout<< "Enter your Account Number: ";
    cin >> AccountNumber;
    
    double amount;
    cout<< "Enter deposit Amount: ";
    cin >> amount;
    
    Account* account = Bank::accounts[AccountNumber]; 
    account->depositMoney(amount);

    return ;
}
void Bank::withdrawMoney(){
    int AccountNumber;
    cout<< "Enter your Account Number: ";
    cin >> AccountNumber;
    
    double amount;
    cout<< "Enter deposit Amount: ";
    cin >> amount;
    
    Account* account = Bank::accounts[AccountNumber]; 
    account->withdrawMoney(amount);
    
    return ;
}
void Bank::deleteAccount(){
    int AccountNumber;
    cout<< "Enter your Account Number: ";
    cin >> AccountNumber;
    
    Account* account = Bank::accounts[AccountNumber]; 
    account->~Account();
    
    delete account;
    Bank::accounts[AccountNumber] == NULL;
    return ;
}

Bank::~Bank(){
    for(Account* acc: accounts){
        delete acc;
    }
    accounts.clear();
    cout<<"Bank Gone bankrupt" << endl;
}
