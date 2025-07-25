#include <bits/stdc++.h>

using namespace std;

class BankAccount {
    int balance;
    string owner;
    public:
        void setDetails(int balance, string owner){
            this->balance = balance;
            this->owner = owner;
        }

        void deposit(int amount){
            this->balance += amount;
        }

        void withdraw(int amount){
            if(amount>this->balance){
                return ;
            }
            this->balance-=amount;
        }

        void showBalance(){
            cout<< this->balance;
        }
};

int main(){
    BankAccount b;
    b.setDetails(1000,"angad");
    b.deposit(1000);
    b.withdraw(100);
    b.showBalance();

    return 0;
}