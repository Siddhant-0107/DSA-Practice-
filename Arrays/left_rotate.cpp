#include<bits/stdc++.h>
using namespace std;
void left_rotate(int arr[],int n){
    int temp=arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1]=temp;
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    left_rotate(a,7);
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}