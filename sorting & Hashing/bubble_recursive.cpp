#include <bits/stdc++.h>
using namespace std;
void bubble_rec(vector<int> &arr,int n){
   if(n==0)return;
   for(int i=0; i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
   }
   bubble_rec(arr,n-1);

}
int main(){
   vector<int> a = {9,7,5,8,81,6};
    bubble_rec(a,6);
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}