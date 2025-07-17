#include <bits/stdc++.h>
using namespace std;

class Account {
    private:
    int accountBalance;
    protected:
    int accountNumber;
    public:
    string owner;
    string gender;
};

class Customer: public Account {
    public:
    int checkBalance(){cout<< accountBalance <<endl;}
    void getBankDetails(){ cout << accountNumber << endl;}
    void getUserDetails(){
        cout << owner + " " + gender << endl;
    }
};
int main(){
    Customer randomUser;
    cout << randomUser.checkBalance() << endl;
}