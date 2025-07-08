#include<bits/stdc++.h>
using namespace std;
void generateSubArrays(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[]={1,2,3};
    generateSubArrays(arr, 3);
    return 0;
}