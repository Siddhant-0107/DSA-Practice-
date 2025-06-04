#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int k;
    cinderella>>k;
    unordered_map <int,int> mp;
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i ;j--){
            if((a[j]-a[i])<k) {
                int p= j-i;
                if((p*(p+1)/2)<k){
                    mp[a[j]]=(p+1);
                }
            }
        }
    }
    int cmax=0;
    for(auto it:mp){
        if(it.second>cmax){
            cmax= it.second;
        }
        
    }
    cout<<cmax;
    return 0;
}