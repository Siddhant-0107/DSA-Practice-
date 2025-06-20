#include<bits/stdc++.h>
using namespace std;
int required_days(int arr[], int n, int speed)
{
    int days=0;
    for(int j=0; j<n; j++)
    {
       days+= ceil((double)arr[j]/(double)speed);
    }
    return days;
}
int koko_eating_banana(int arr[], int n, int h)
{                        
    int maximum= INT_MIN;
    for(int i=0; i<n; i++)
    {
       maximum = max(maximum,arr[i]); 
    }  
    int low=0, high=maximum;
    

    while(low<=high)
    {
        int mid= (low+high)/2;
       int x = required_days(arr, n, mid);
       if(x==h)
       return mid;
       else if (x<h)
       {
        high=mid-1;
       }
       else
       {
       low = mid+1;
       }
        
    }
    return -1;
}
int main()
{
    int a[]={7, 15, 6, 3};
    int s =koko_eating_banana(a,4,8);
    cout<<s;
}