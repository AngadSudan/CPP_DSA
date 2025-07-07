#include<bits/stdc++.h>
using namespace std;
void reverseVector(vector<int>& ans){
    int start = 0;
    int end = ans.size() - 1;
    while(start < end){
        int temp = ans[start];
        ans[start] = ans[end];
        ans[end] = temp;
        start++;
        end--;
    }
}

void printSumArray(int arr1[], int n, int arr2[], int m){
    int p1= n-1;
    int p2= m-1;
    vector<int> ans;
    int carry=0;
    while(p1 >= 0 || p2 >= 0 || carry != 0){
        int sum = carry;
        if(p1 >= 0) sum += arr1[p1--];
        if(p2 >= 0) sum += arr2[p2--];
        carry = sum/10;
        int digit = sum%10;
        ans.push_back(digit);
    }
    reverseVector(ans);
    for(int digit : ans) {
        cout << digit << " ";
    }
    cout << endl;
}

int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {4,5};
    printSumArray(arr1,3,arr2,2);
}