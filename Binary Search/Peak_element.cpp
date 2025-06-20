#include<bits/stdc++.h>
using namespace std;
int peak_element(int arr[], int n)
{
    int low=0, high=n-1;
    if(arr[low]>arr[low+1])
    {
        return low;
    }
    else{
        low++;
    }
    if(arr[high]>arr[high-1])
    {
        return high;
    }
    else{
        high--;
    }
    if(n==1)
    return 0;

    while(high>=low)
    {
        int mid=(high+low)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
        return mid;
        //mid at increasing side
        else if(arr[mid]>arr[mid-1])
        {
            low=mid+1;
        }
       //mid at decreasing side or lies at a dip eg. 4,1,5
       else
       {
        high =mid-1;
       }
        
    }
    return -1;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,5,1};
    int s =peak_element(a,10);
    cout<<a[s];
}