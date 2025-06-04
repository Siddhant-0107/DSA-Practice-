#include<bits/stdc++.h>
using namespace std;
int duplicate_remover(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[++i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int a[]={1,2,2,5,8,9,9};
    int k=duplicate_remover(a,7);
    cout<<k<<endl;
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}