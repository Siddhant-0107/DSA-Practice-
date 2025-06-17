#include<bits/stdc++.h>
using namespace std;
pair<int,int> minimum_in_rotated_array(int arr[], int n)
{
    int low =0;
    int high =n-1;
    pair<int,int> ans;
    int minimum = INT_MAX;
    int index=0;
    while(low<=high)
    {
        int mid = (low+high)/2;    
        if(arr[low]==arr[high])
        {
            low++;
            high--;
            continue;
        }                
        //left sorted
        if(arr[low]<=arr[mid]&&arr[mid]>=arr[mid-1])
        {
           if(arr[low]<minimum)
           {
            minimum=arr[low];
            index=low;
           } //minimum=min(arr[low],minimum);
            low=mid+1;
        }
        //right sorted
        else
        {
           if(arr[mid]<minimum)
           {
            minimum=arr[mid];
            index=mid;
           } //minimum=min(arr[mid],minimum);
           high = mid-1;
        }
        
    }
    ans.first=minimum;
    ans.second = index;
    return ans;
}
int main()
{
    int a[]={4,5,6,7,0,1,2,3};
    pair<int,int> s =minimum_in_rotated_array(a,8);
    cout<<"Minimum : "<<s.first<<endl;
    cout<<"No. of times array has been rotated : "<<s.second<<endl;
}