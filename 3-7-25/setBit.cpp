#include<bits/stdc++.h>

int setBit(int n){
    int ans=1;
    while(n%2==0){
        n=n>>1;
        ans++;
    }
    return ans;
}
int main(){
    int n;
    std::cin>>n;
    
    std::cout<< setBit(n);

    return 0;
}