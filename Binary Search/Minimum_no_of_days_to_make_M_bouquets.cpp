#include<bits/stdc++.h>
using namespace std;
bool required_days(int arr[], int n, int day, int m, int k)
{
    int flowers=0, bouquet_no =0;
    for(int j=0; j<n; j++)
    {
       if(arr[j]<=day)
       {
        flowers++;
        if(flowers==k)
        {
            bouquet_no++;
            flowers=0;
        }
       }
       else
       {
            flowers =0;
        }
        if(bouquet_no==m)
        return true;
    }
    return false;
}
int minimum_no_of_days(int arr[], int n, int m, int k)
{
    if(n< m*k)
    return -1;
    int maximum= INT_MIN;
    for(int i=0; i<n; i++)
    {
       maximum = max(maximum,arr[i]); 
    }  
    int low=1, high=maximum,  ans=-1;
    

    while(low<=high)
    {
        int mid= (low+high)/2;
       bool x = required_days(arr, n, mid, m, k);
       if(x==true)
       {
       ans=mid;
       high=mid-1;
       }
       else
       {
       low = mid+1;
       }
        
    }
    return ans;
}
int main()
{
    int a[]={7, 7, 7, 7, 13, 11, 12, 7};
    int s =minimum_no_of_days(a,8,2,3);
    cout<<s;
}