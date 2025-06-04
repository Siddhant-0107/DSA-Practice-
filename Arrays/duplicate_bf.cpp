#include<bits/stdc++.h>
using namespace std;
int duplicate_remover(int arr[],int n){
    set <int> st;
    
    for (int i = 0; i < n; i++)
    {
       
        st.insert(arr[i]);
    }
    int k= st.size();
    int i=0;
    for (auto it:st)
    {
        arr[i++]= it;
    }
    return k;
}
int main(){
    int a[]={1,2,2,5,8,9,9};
    int k=duplicate_remover(a,7);
    cout<<k;
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}