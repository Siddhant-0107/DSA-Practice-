#include<bits/stdc++.h>
using namespace std;

int  fact(int n){
    if(n==0) return 1 ;
    if(n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int fac;
   fac= fact(7);
    cout<<fac;
    return 0;

}