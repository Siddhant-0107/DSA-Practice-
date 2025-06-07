#include<bits/stdc++.h>
using namespace std;
int count_no_of_subarrays_xor(int arr[], int n,int k)
{
    unordered_map <int,int> mp;
    int xor_sum=0;
    int count =0;
    for (int i = 0; i < n; i++)
    {
        xor_sum^= arr[i];
        mp[xor_sum] ++;
        int x= xor_sum^k;
         if( mp.find(x)!=mp.end())            //5, 6, 7, 8, 9
        {
            count++;
        }
    }
    count +=mp[k];
   
    return count;
}
int main()
{
    int a[] ={4, 2, 2, 6, 4};
    cout<<count_no_of_subarrays_xor(a,5,6);
    return 0;
}