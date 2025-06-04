#include<bits/stdc++.h>
using namespace std ;
vector <int> largest_subarray_sum(int arr[], int n)
{
    int start =0, end = 0, sum = 0, max_sum =0;
    for (int i = 0; i < n; i++)
    {
        if(sum >= 0)
        {
            sum+= arr[i];
                                          //-2,1,-3,4,-1,2,1,-5,4
        }
        else 
        {
            sum=0 ;
            start = i ;
            sum+= arr[i];
        }
       if(sum> max_sum)
       {
        max_sum = sum;
        end = i ;
       }
    }
    vector <int> ans ;
    ans.push_back(max_sum);
    ans.push_back(start);
    ans.push_back(end);
    return ans ;
}
int main()
{
    int a[] = {-2,1,-3,4,-1,2,1,-5,4} ;
   vector <int> ans=  largest_subarray_sum(a, 9) ;
    cout << ans[0]<< endl;
    for(int i= ans[1]; i<= ans[2]; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}