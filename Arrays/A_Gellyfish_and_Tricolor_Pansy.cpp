#include<bits/stdc++.h>
#define l long long
using namespace std;
int solve(l a, l b, l c, l d){
    if(min(a,c)>=min(b,d))
    {
        return 1;
    }    
    else return 2;

}
int main(){
    l t;
    cin>>t;
    while(t--){
        l a,b,c,d;
        cin>>a>>b>>c>>d;
    int count = solve(a,b,c,d);
    if(count==1) cout<<"Gellyfish"<<endl;
    if(count==2)cout<<"Flower"<<endl;
        }    
        return 0;
}