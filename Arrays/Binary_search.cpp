#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int target)
{
    int low=0, high=n-1;
    while(high>=low)
    {
        int mid=(high+low)/2;
        if(arr[mid]==target)
        return mid;
        if(target<=arr[mid])
        {
            high= mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int a[]={1,3,5,6,7,8,9,10,15,21,52,81};
    int s =binary_search(a,12,9);
    cout<<s;
}