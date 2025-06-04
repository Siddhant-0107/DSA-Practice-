#include<bits/stdc++.h>
using namespace std;
 void largest(int *arr, int n, int i, int &cmax, int &secmax){
    if(i==n)return;
   if(arr[i]>cmax){
    secmax=cmax; 
    cmax=arr[i];
     
   }
   else if(arr[i]>secmax&&arr[i]!=cmax){
    secmax=arr[i];
   }
    largest(arr,n,i+1,cmax,secmax);
}
int main(){
    int a[]={1,2,3};
    int cmax=0;     //use INT_MIN  in place of 0
    int secmax=0;   //use INT_MIN in place of 0
    largest(a,3,0,cmax,secmax);
    cout<<secmax;
    return 0;
}