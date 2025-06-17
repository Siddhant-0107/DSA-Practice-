#include<bits/stdc++.h>
using namespace std;
int search_insert_position(int arr[], int n, int target)
{
    int low=0, high=n-1;
    int ub=-1;
    while(high>=low)
    {
        int mid=low+(high-low)/2;
        
        if(arr[mid]>target)
        {
            high= mid-1;
            ub=mid;
        }
        else 
        {
            low=mid+1;
        }
    }
   if(ub>0)
    return ub-1;
    else return ub;
}
int main()
{
    int a[]={2, 2 , 3 , 3 , 3 , 3 , 4};
    int s =search_insert_position(a,7,3);
    cout<<s;
}