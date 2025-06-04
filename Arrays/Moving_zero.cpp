#include<bits/stdc++.h>
using namespace std;
void zero_collector(int arr[],int n){
    int i=0;
    for (int j = 0; j < n; j++)
    {
       if(arr[i]==0){
        if(arr[j]!=0&&j!=i){
            swap(arr[i],arr[j]);
            i++;
        }
        else continue;
       }
       else i++;
    }
    
}
int main(){
    int a[]={0,0,0,0,0,0,0,0,0,0,1};
    zero_collector(a,11);
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}