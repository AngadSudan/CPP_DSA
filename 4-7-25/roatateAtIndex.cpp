#include<bits/stdc++.h>

void swap(int arr[], int start, int end){
    while(start<end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotateAtIndex(int arr[], int n, int index){
    swap(arr,index+1,n-1);
    swap(arr,0,n-1);
    swap(arr,0,index-1);
    swap(arr,index+1,n-1);
}
int main(){
    int arr[]={3,2,1,8,9,2};
    rotateAtIndex(arr,6,2);
    for(int i=0;i<6;i++){
        std::cout<<arr[i] << ' ';
    }
    std::cout<<std::endl;
    return 0;
}