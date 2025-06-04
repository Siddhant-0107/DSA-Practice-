#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int *arr, int n){    
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){     
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        }
    }
}
int main(){
    int a[]={9,7,5,8,81,6};
    insertion_sort(a,6);
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}