#include<bits/stdc++.h>
using namespace std;
vector <vector<int>> three_sum(int arr[], int n)
{
    sort(arr,arr+n);
    set <vector<int>> st;
    int j,k;
    for (int i = 0; i < n-2; i++)
    {
        j=n-1;
        k=i+1;
        while(j>k)
        {
            int sum=arr[i]+arr[j]+arr[k];
            if(sum>0)
            {
                j--;
            }
            else if(sum<0)
            {   while (k < j && arr[k] == arr[k + 1]) {
                k++;
            }
                k++;
            }
            else
            {
                vector<int> temp ={arr[i], arr[j], arr[k]};
                sort(temp.begin(), temp.end());
                st.insert(temp);
                k++;
            }
        }
        
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main()
{
    int a[]={-1,0,1,0};
    vector <vector<int>> ans =three_sum(a, 4);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}