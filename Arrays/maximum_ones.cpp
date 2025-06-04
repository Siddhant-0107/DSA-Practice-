#include<bits/stdc++.h>
using namespace std;
int maxones(int arr[],int n){
    int count=0;
    int cmax=0;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]==1){
            count++;
            if(count>cmax)
            cmax=count;

        }
        else{
            count=0;
        }
    }
    return cmax;
}
int main(){
    int a[]={1, 1, 0, 1, 1, 1};
    int k=maxones(a,7);
    cout<<k;
    return 0;
}