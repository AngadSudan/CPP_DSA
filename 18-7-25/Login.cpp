#include <bits/stdc++.h>
using namespace std;

string USERNAME = "admin";
string PASSWORD="admin";

bool login(string username, string password){
    if(username.length() <= 0 || password.length() <=0){
        return false;
    }

    if(username==USERNAME && password == PASSWORD) return true;

    return false;
}

int main(){
    int attempts=0;
    while(attempts<3){
        string username;
        string password;
        
        cout<<"enter username: ";
        cin>> username;
        cout<<"enter password: ";
        cin>> password;
        bool isPasswordCorrect = login(username, password);
        if(isPasswordCorrect){
            cout<<"login successful";
            return 0;
        }
        
        cout<<"wrong credentials\n";
        attempts--;
    }
    cout << "Account Locked";
}