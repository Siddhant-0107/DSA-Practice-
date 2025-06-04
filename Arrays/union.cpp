#include<bits/stdc++.h>
using namespace std;
vector<int> union_array(int arr1[],int m,int arr2[], int n){
    int i=0,j=0;
    vector <int> temp;
    while(i<m&&j<n){
        if(arr1[i]<arr2[j]){        //a[]={1,2,3,4,5};
            if(temp.empty()||temp.back()!=arr1[i])                         //b[]={2,3,4,4,5};
            temp.push_back(arr1[i]);  //temp={1,2,3,4}
            i++;
        }
        else if(arr1[i]==arr2[j]){
            if(temp.empty()||temp.back()!=arr1[i]) 
            temp.push_back(arr1[i]);
            i++; 
           
        }
        else if(arr1[i]>arr2[j]){
            if(temp.empty()||temp.back()!=arr2[j]) 
            temp.push_back(arr2[j]);
            j++;
        }
        
    }
    while(i<m){
    	if(temp.empty()||temp.back()!=arr1[i])
            temp.push_back(arr1[i]);
            i++;
        }
        while(j<n){
        	if(temp.empty()||temp.back()!=arr2[j]) 
            temp.push_back(arr2[j]);
			j++;        
        }
    return temp;
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int b[] = {2,3,4,4,5,11,12};
    vector<int> ans;
    ans= union_array(a,10,b,7);
    for(auto it:ans){
            cout<<it<<" ";
    }
    return 0;
}