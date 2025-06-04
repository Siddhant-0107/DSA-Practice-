#include <bits/stdc++.h>
using namespace std;
int longest_subarray(int arr[], int n, int k)
{
    map<int, int> mp;
    int l = 0, lmax = 0;
    mp[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        mp[i] = arr[i] + mp[i - 1];
        if (mp[i] == k)
        {
            lmax = max(lmax, (i + 1));
        }
        
         if (mp.find(mp[i] - k) != mp.end())
        {
            l = i - (mp.find(mp[i] - k))->first;
            lmax = max(lmax, l);
        }
    }
    return lmax;
}

int main()
{
    int a[] = {1, 2, 3, 1, 1, 1};
    cout << longest_subarray(a, 6, 5);
    return 0;
}

