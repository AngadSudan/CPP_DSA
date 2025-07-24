#include <bits/stdc++.h>

using namespace std;
int factorial(int n) { 
    if(n==1) return 1;

    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    int fact= factorial(n);
    cout<<fact<<endl;
    if(fact<0 || fact>__INT16_MAX__){
        cout<<"outside range";
    }else{
        cout<<"within range";
    }
}