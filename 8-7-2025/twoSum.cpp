#include<bits/stdc++.h>

using namespace std;

bool findSum(int arr[], int target, int n){
    int i=0;
    int j= n;
    
    sort(arr, arr + n);

    while(i<j){
        int sum= arr[i] + arr[j];
        if(sum==target) return true;
        if(sum<target){
            i++;
        }else{
            j--;
        }
    }

    return false;
}

int main(){
    int arr[] = {3,-4,5,8,12,15};
    int target= 13;
    if(findSum(arr,target,6)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
