#include<bits/stdc++.h>
using namespace std;
void quick_sort(vector<int> &arr,int low,int high){
    if(low>=high) return;
int pivot = arr[low];
int i= low ;
int j= high;
while(i<=j){  
              //9,7,5,8,81,6
    while(arr[i]<=pivot&&i<=high-1) 
    i++;
    while(arr[j]>pivot&&j>=low+1)
    j--;
    if(i<j){
    swap(arr[i++],arr[j--]); }
}
   

    swap(arr[low],arr[j]);
    quick_sort(arr,low,j-1);
    quick_sort(arr,j+1,high);
}
int main()
{
    vector<int> a = {9,7,5,8,81,6};
    quick_sort(a,0,5);
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}

