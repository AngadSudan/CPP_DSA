#include <bits/stdc++.h>
using namespace std;
void sortedArray(int arr1[], int n,int arr2[], int m){
    int arr3[n+m];
    int p1=0;
    int p2=0;
    int index=0;
    while(p1<n && p2<m){
        if(arr1[p1]<=arr2[p2]){
            arr3[index++]=arr1[p1];
            p1++;
        }else{
            arr3[index++]=arr2[p2];
            p2++;
        }
    } 

    while(p1<n){
         arr3[index++]=arr1[p1];
            p1++;
    }
    while(p2<m){
         arr3[index++]=arr1[p2];
            p2++;
    }
   for(int i=0;i<n+m;i++){
        cout<< arr3[i] <<  " ";
    }
}
int main(){
    int arr1[]= {3,8,12,13,17,20,22,33,800};
    int arr2[]= {-3,-1,0,9,15,18,38};
     sortedArray(arr1, 9,arr2,7);
}