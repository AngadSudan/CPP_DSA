#include<bits/stdc++.h>
using namespace std;

int decrementArrayElement(int arr[],int n){
    int XorOfAllElement= 0;
    for(int i=0;i<n;i++){
        XorOfAllElement^= arr[i]; 
    }
    if(XorOfAllElement==0) return 0;
    
    int ans= INT32_MAX;
    for(int i=0;i<n;i++){
        // calculating xor of all element except that element
        int xorWithoutElement= XorOfAllElement ^ arr[i];
        if(xorWithoutElement<arr[i] && (arr[i]-xorWithoutElement)<ans){
            ans= arr[i]-xorWithoutElement;
        }
    }
    return ans==INT32_MAX?-1:ans;
}

int main(){
    int arr[]= {3,6,8};

    int numberOfDecrement= decrementArrayElement(arr,3);

    std::cout<<numberOfDecrement;
}