#include<bits/stdc++.h>
using namespace std;
vector<int> two_sum(int arr[], int n, int k)
{
    sort(arr,arr+n);
    vector<int> ans;
    ans.push_back(0);
    int i=0,j=n-1;
    while(i<j)
    {
        int sum=arr[i]+arr[j];              //2,5,6,8,11
        if(sum>k)
        {
            j--;
        }
       else if(sum<k)
        {
            i++;
        }
        else
        {
           ans[0]=1;
           ans.push_back(i);
           ans.push_back(j);
           return ans; 
        }
    }
   return ans;
}
int main()
{
    int a[]={2,5,6,8,11};
    vector <int> ans =two_sum(a, 5, 14);
    if(ans[0]==0)
    cout<<"NO";
    else
    {
        cout<<a[ans[1]]<<" "<<a[ans[2]];
    }
    return 0;
}