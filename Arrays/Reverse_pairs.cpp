#include <bits/stdc++.h>
using namespace std;
int countpair(int arr[], int low, int mid, int high)
{
     int c =0;
    int  j = mid + 1;
        for(int i = low; i<= mid;i++)
        {
            while(j<=high&&arr[i]>2*arr[j])
            {
                j++;
            }
            c+=(j-mid-1);
        }
        return c;
}
void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int right = mid+1;
    int left = low;
    

    while (left <= mid && right <= high)
    {
        
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    
}
int reverse_pairs(int arr[], int low, int high)
{   
    int count=0;
    if(low>=high)
    return 0;
    int mid = (high + low) / 2;
    count+=reverse_pairs(arr, low, mid );
   count+= reverse_pairs(arr, mid+1, high);
   count+=countpair(arr,low,mid,high);
   merge(arr, low, mid , high);
   return count;
    
}
int main()
{
    int a[]={1,3,2,3,1};
    int count=reverse_pairs(a,0,4);
    cout<<count;
    return 0;

}