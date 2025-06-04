#include<bits/stdc++.h>
using namespace std ;
void next_perm(int arr[], int n)
{
    int break_point =n;
    for (int i = n-2; i >=0; i--)
    {
        if(arr[i]< arr[i+1])
        {
            break_point = i ;
        }
    }
    if(break_point == n)
    {
        reverse(arr,arr+n);
        return;
    }
    else
    {   
        int smallest_greater= break_point + 1;
        for(int i= break_point+1; i<n;i++)
        {
            if(arr[i]>arr[break_point])
            {
                if(arr[i]< arr[smallest_greater])
                {
                    smallest_greater = i ;
                }
            }
        }
        swap(arr[break_point],arr[smallest_greater]);
        reverse(arr+break_point+1, arr+n);
    }
}
int main()
{
    int a[] = {3,2,1} ;
    next_perm( a, 3) ;
    for(auto it:a)
    {
        cout<<it<<" ";
    }
}