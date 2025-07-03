#include<bits/stdc++.h>

int flipBit(int n, int shift){
    int bitmask= 1<<(shift-1);
    return n^bitmask;
}
int main(){
    int n;
    int shift;
    std::cin>>n>>shift;
    std::cout<< flipBit(n,shift);
}