#include<bits/stdc++.h>
using namespace std;
void sorted_array_merge(int arr1[], int arr2[], int n, int m)
{
    int gap = (m+n)/2;
    
    
    while(gap>0)
    {
        int i=0;
    int j=i+gap;
        while(j<m+n)
        {
            if(j>=n&&i<n)
            {
                if(arr1[i]>arr2[j-n])
                {
                    swap(arr1[i],arr2[j-n]);
                }
                else if (i>=n && j>n)
                {
                    if(arr2[i-n]>arr2[j-n])
                    swap(arr2[i-n],arr2[j-n]);
                }
                 else 
                {
                    if(arr1[i]>arr1[j])
                    swap(arr1[i],arr1[j]);
                }

            }
            i++; j++; 
        }
        
        if(gap==1)
        break;
        gap/=2;
        
    }
    sort(arr1,arr1+n);
     sort(arr2,arr2+m);
}
int main()
{
    int a[]={1,3,5,7};
    int b[]={0,2,6,8,9};
    sorted_array_merge(a,b,4,5);
    for (int i = 0; i < 4; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}