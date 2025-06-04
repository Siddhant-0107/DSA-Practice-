#include<bits/stdc++.h>
using namespace std;
bool sort_checker(int *arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]) continue;
        else return false;
    }
    return true;
}
int main(){
    int a[]={1,2,3,8,5,6,7};
    bool check=sort_checker(a,7);
    cout<<check;
return 0;
}