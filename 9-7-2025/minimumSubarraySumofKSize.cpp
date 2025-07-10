#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n, int size){
    int i=0;
    int j= size-1;

    int maxSum= 0;
    int subArraySum = 0;

    for(int k=i;k<=j;k++){        
        maxSum+= arr[k];
        subArraySum+= arr[k];
    }
    i++;
    j++;
    
    while(i<n-size+1){
        subArraySum = subArraySum - arr[i-1] + arr[j];
        if(subArraySum>maxSum) maxSum= subArraySum;
        i++;
        j++;
    }
    return maxSum;
}
int main(){
    int arr[]= {-3,8,12,4,9,6,10,-3,5};
    int k= 4;
    int maxSubArraySum= maxSum(arr, 9,k);
    cout<<maxSubArraySum;
    return 0;
}
