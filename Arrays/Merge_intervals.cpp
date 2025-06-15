#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge_intervals(vector<vector<int>> arr)
{
    int n= arr.size();
     sort(arr.begin(),arr.end());
     vector <vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if(ans.empty()!=0||ans.back()[1]<arr[i][0])
        {
            ans.push_back(arr[i]);
        }
        else if (ans.back()[1]>arr[i][0])
        {
            if(ans.back()[1]<arr[i][1])
            ans.back()[1]=arr[i][1];
        }
    }
    return ans;
}
int main()
{
    vector <vector<int>> a = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    vector <vector<int>> ans = merge_intervals(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < 2; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"]"<<" ";
    }
}