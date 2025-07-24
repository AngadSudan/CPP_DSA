#include <bits/stdc++.h>

using namespace std;

int fact(int n){
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int n= 145;
    int check = n;
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum+= fact(digit);
        n=n/10;
    }

    if(check==sum){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}