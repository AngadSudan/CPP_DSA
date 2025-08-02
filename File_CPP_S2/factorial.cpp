#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int prod=1;
    for(int i=1;i<n;i++) prod*= i;
    return prod;
}

int main(){
    int n;
    cin>> n;
    cout<<fact(n)<<endl;
    return 0;
}