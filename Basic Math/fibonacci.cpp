#include<bits/stdc++.h>
using namespace std;
void fib(int p,int pp, int n){
    if(n<0) return;
    cout<<" "<<(p+pp);
    return fib(p+pp,p,n-1) ;
}
int main(){
    int n;
    cin>>n;
    if(n==0) cout<<0;
    cout<<0<<" "<<1;
    if(n>1){
        fib(1,0,n-2);
    }
}