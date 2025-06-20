#include<bits/stdc++.h>
using namespace std;
bool required_days(int arr[], int n, int d, int cap)
{
    int day=1, c= cap;
    for(int j=0; j<n; j++)
    {
       if(arr[j]<=c)
       {
            c-=arr[j];
        }
        else
        {
            day++;
            c=cap-arr[j];
        }
    }   
    if(day<=d)
    return true;
    else 
    return false;
}
int capacity_of_ship(int arr[], int n, int d)
{
    int maximum= INT_MIN;
    int sum=0;
    for(int i=0; i<n; i++)
    {
       maximum = max(maximum,arr[i]); 
       sum+=arr[i];
    }  
    int low=maximum, high=sum,  ans=-1;
    

    while(low<=high)
    {
        int mid= (low+high)/2;
       bool x = required_days(arr, n, d, mid);
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
    int a[]={5,4,5,2,3,4,5,6};
    int s =capacity_of_ship(a,8,5);
    cout<<s;
}