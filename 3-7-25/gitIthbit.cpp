#include <bits/stdc++.h>

int getIthBit(int n, int shift){
    int bitmask= (n>>shift)%2;
    return bitmask;
}
int main(){
    int n;
    int shift;
    std::cin>>n>>shift;
    std::cout<< getIthBit(n,shift);
}