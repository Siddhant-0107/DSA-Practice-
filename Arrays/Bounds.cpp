#include<bits/stdc++.h>
using namespace std;
pair<int,int> bound(int arr[], int n, int target)
{
    pair<int,int> ans;
    int low=0, high=n-1;
    int lb=n,ub=n;
    while(high>=low)
    {
        int mid=low+(high-low)/2;
        // if(arr[mid]>target)
        // {
        //     ub=mid;
        // }
        if(arr[mid]>=target)
        {
            high= mid-1;
            lb=mid;
        }
        else 
        {
            low=mid+1;
        }
    }
    if(arr[lb]==target)
    ub=lb+1;
    else
    ub=lb;
    ans.first=lb;
    ans.second=ub;
    return ans;
}
int main()
{
    int a[]={1,3,5,6,7,8,9,10,15,21,52,81};
    pair<int,int> s =bound(a,12,9);
    cout<<s.first<<" "<< s.second;
}