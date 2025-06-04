#include<bits/stdc++.h>
using namespace std ;
void next_perm(int arr[], int n)
{
    int break_point =n;
    for (int i = n-1; i >0; i--)
    {
        if(arr[i]< arr[i-1])
        {
            break_point = i-1 ;
        }
    }
    if(break_point == -1)
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
        reverse(arr+break_point, arr+n);
    }
}
int main()
{
    int a[] = {1,3,2} ;
    next_perm( a, 3) ;
    for(auto it:a)
    {
        cout<<it<<" ";
    }
}