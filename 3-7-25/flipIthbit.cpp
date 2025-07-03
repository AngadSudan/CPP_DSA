#include<bits/stdc++.h>

int flipFirstIthBits(int n, int bitPosition){
    int maxValue = pow(2,31)-1;
    int bitmask= (maxValue>>(31-bitPosition));
    return n^bitmask;
}

int main(){
    int n,firstIth;
    std::cin>>n>>firstIth;
    std::cout<< flipFirstIthBits(n,firstIth);
    return 0;
}