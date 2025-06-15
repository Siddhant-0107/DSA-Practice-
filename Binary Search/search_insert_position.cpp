#include<bits/stdc++.h>
using namespace std;
int search_insert_position(int arr[], int n, int target)
{
    int low=0, high=n-1;
    int lb=n;
    while(high>=low)
    {
        int mid=low+(high-low)/2;
        
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
   
    return lb;
}
int main()
{
    int a[]={1,3,5,6,7,8,9,10,15,21,52,81};
    int s =search_insert_position(a,12,9);
    cout<<s;
}