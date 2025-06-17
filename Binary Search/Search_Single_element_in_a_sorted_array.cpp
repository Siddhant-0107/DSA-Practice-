#include<bits/stdc++.h>
using namespace std;
int single_search(int arr[], int n)
{
    int low=0, high=n-1;
    if(arr[low]!=arr[low+1])
    {
        return low;
    }
    else{
        low++;
    }
    if(arr[high]!=arr[high-1])
    {
        return high;
    }
    else{
        high--;
    }

    while(high>=low)
    {
        int mid=(high+low)/2;
        if(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1])
        return mid;
        //left of the number even odd pair
        if(mid%2==0&&arr[mid]==arr[mid+1]||mid%2==1&&arr[mid]==arr[mid-1])
        {
            low=mid+1;
        }
       //right of the number 
       else
       {
        high =mid-1;
       }
        
    }
    return -1;
}
int main()
{
    int a[]={1,1,2,2,3,3,4,5,5,6,6};
    int s =single_search(a,11);
    cout<<a[s];
}