#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
   /* for(auto it : mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }*/
   sort(mp.begin(),mp.end());
 int maxkey=0;
   for(auto it: mp){
    if(it.second>(it+1).second)
    maxkey=it.fist;
    else maxkey= (it+1).secon
   }
    return 0;
}