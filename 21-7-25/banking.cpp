#include <bits/stdc++.h>
using namespace std;
namespace Banking {
    class Account {
        private:
            int accountNumber;
            double balance;
        public:
            Account(){
                cout<<"class initialized "<<endl;
            }
            Account(int accountNumber, double initialBalance){
                this->accountNumber = accountNumber;
                this->balance = initialBalance;
            }

            void showDetails(){
                cout<< " accountNumber : " << this->accountNumber << " balance is " << this->balance << endl;
            }
    };
}

int main(){
    Banking:: Account random = Banking::Account(0,12);
    random.showDetails();
}