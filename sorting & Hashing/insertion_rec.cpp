#include <bits/stdc++.h>
using namespace std;
void insertion_rec(vector<int> &arr, int w,int n){
    if((n-w)==0) return;  //Better condition:(n==w)
    for(int i=w;i>0;i--){      //5,7,8,9,81,6
        if(arr[i]<arr[i-1])
        swap(arr[i],arr[i-1]);
        else break;
    }
    insertion_rec(arr,w+1,n);
}
int main()
{
    vector<int> a = {9,7,5,8,81,6};
    insertion_rec(a,1,6);
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}