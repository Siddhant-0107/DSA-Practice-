#include<bits/stdc++.h>
using namespace std;
int rotated_array_search(int arr[], int n, int k)
{
    int low =0;
    int high =n-1;
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
            if(k<= arr[mid]&& k>=arr[low])
            {
                high =mid-1;
            }
            else
            {
                low= mid+1;
            }
        }
        //right sorted
       else // if(arr[mid]<=arr[high]&&arr[mid+1]>=arr[mid])
        {
            if(k>=arr[mid]&&k<=arr[high])
            {
                low =mid+1;
            }
            else
            {
                high= mid-1;
            }
        }
        if(arr[mid]==k)
        return mid;
    }
    return -1;
}
int main()
{
    int a[]={7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int s =rotated_array_search(a,10,3);
    cout<<s;
}