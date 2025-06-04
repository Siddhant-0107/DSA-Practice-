#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
bool track[n]= {false};
int maxcount=0;
int maxval=arr[0];
for(int i=0;i<n;i++){
    int count=1;
    if(track[i]==false){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            track[j]=true;}
    } 
    if(count>maxcount){
        maxcount=count;
        maxval=arr[i];
    }
    //cout<<arr[i]<<"->"<<count<<endl;
    }
    else continue;
}
cout<<maxval<<"->"<<maxcount;
return 0;
}