#include<bits/stdc++.h>

int flipBit(int n, int shift){
    int number= pow(2,32);
    int bitmask= number>>(shift-1);
    return n^bitmask;
}
int main(){
    int n;
    int shift;
    std::cin>>n>>shift;
    std::cout<< flipBit(n,shift);
}