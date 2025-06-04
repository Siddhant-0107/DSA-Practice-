#include<bits/stdc++.h>
using namespace std;
void selection_sort(int *arr, int n){
for(int i=0;i<n;i++){//inefficient method (CORRECT: find min and place from the start)
    for(int j=i;j<n;j++){      

        if(arr[j]<arr[i])
        swap(arr[i],arr[j]);
    }
}
}
int main(){
    int a[]={9,7,5,8,81,6};
    selection_sort(a,6);
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}