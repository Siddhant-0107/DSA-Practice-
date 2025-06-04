#include <bits/stdc++.h>
using namespace std;
bool pelchecker(int i, string s){
if(i<s.length()/2){
    if(s[i]==s[s.length()-i-1])
    return pelchecker(i+1,s);
    else return false;
}
else return true;
}
  
    int main(){
        string s;
        cin>>s;
        bool t=pelchecker(0,s);
        cout<<t;
        return 0;
    }