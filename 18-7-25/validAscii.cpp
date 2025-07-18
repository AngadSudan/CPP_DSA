#include <bits/stdc++.h>

using namespace std;
void checkCharacter(char ch){
    int asciiValue = (int) ch;
    if(asciiValue==32) {
        cout<<"Invalid Literal"; 
        return;
    }
    if((ch>=65 && ch<=91) || (ch>=97 && ch<=123)){
        cout<<"Alphabet";
    }else if(ch -'0' >=0 && ch-'0' <10){
        cout<<"Digit";
    }else{
        cout<<"Special Character";
    }
}
int main(){
    char ch;
    cin>>ch;

    checkCharacter(ch);
}