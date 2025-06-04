#include<bits/stdc++.h>
using namespace std;
int solve(int a, int b, int c, int d){
    if(a>d && c>b)
    {
        return 1;
    }
    else if( a<d && c<b)
    {
        return 2;
    }
    else if(a>d && c<b)
    {
        if(c<d)
        {
            return 2;
        }
        else return 1;
    }
    else if( a<d && c>b)
    {
        if(c<d)
        {
            return 2;
        }
        else return 1;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>c>>d;
    int count = solve(a,b,c,d);
    if(count==1) cout<<"Gellyfish";
    if(count==2)cout<<"Flower"
        }    return 0;
}