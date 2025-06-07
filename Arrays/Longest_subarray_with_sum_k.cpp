#include<bits/stdc++.h>
using namespace std;
int longest_subarray_with_sum_k(int arr[], int n, int k)
{
    int j=0, len=0, sum=0;
    for (int i = 0; i < n; i++)
    {
        while(sum > k)
        {
            sum-=arr[j];
            j++ ;
        }
        sum+=arr[i];
        if(sum==k)
        {
            len = max(len,i-j+1) ;
        }
    }
    return len;
}
int main()
{
    int a[] ={1,2,3,1,1,1,1,4,2,3};
    cout<<longest_subarray_with_sum_k(a,10,3);
    return 0;
}