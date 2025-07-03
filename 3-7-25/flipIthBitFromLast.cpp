#include<bits/stdc++.h>

int flipBit(int n, int shift){
    int number= pow(2,shift)-1;
    std::cout << number << std::endl ;
    int bitmask= number<<(32-shift);
    std::cout << bitmask << std::endl ;
    return n^bitmask;
}
int main(){
    int n;
    int shift;
    std::cin>>n>>shift;
    std::cout<< flipBit(n,shift);
}