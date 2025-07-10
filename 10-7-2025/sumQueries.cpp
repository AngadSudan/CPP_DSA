#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-3,8,4,2,-5,0,-8,17,18,-3};
    int n= sizeof(arr)/sizeof(int);
    int queries[4][2]= {{1,3},{2,8},{3,6},{4,8}};
    int answer[4];

    int totalSum=0;
    for(int i=0;i<n;i++) totalSum+=arr[i];

    int prefixSum[n];
    int postSum[n];
    prefixSum[0]=0;
    for(int i=1;i<n;i++){
        prefixSum[i]= prefixSum[i-1]+ arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<prefixSum[i] << " ";
    }
    cout<<endl;
    postSum[n-1]=0;
    for(int i=n-2;i>=0;i--){
        postSum[i]= postSum[i+1] + arr[i+1];
    }

    for(int i=0;i<4;i++){
        int start= queries[i][0];
        int end= queries[i][1];

        answer[i]= totalSum- postSum[end] - prefixSum[start];
    }

    for(int i=0;i<4;i++){
        cout<< answer[i] << " ";
    }
}