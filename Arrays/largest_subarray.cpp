#include <bits/stdc++.h>
using namespace std;
void cummulative_array(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
}
pair<int, int> largest_subarray(int arr[], int n, int k)
{
    int j = 0, start = 0, end = 0, l = 0, lmax = 0;
    for (int i = 0; i < n; i++)
    {
		l++;
        if (arr[i] == k || arr[i] - arr[end] == k)
        {
            
            if (l > lmax)
            {
                start = i - l + 1;
                end = i;
                lmax = l;
            }
			l=0;
        }
    }
    pair<int, int> ch;
    ch.first = start;
    ch.second = end;
    return ch;
}
int main()
{
    int a[] = {1,2,0,0,3};
    cummulative_array(a, 5);
    pair<int, int> ans = largest_subarray(a, 5, 5);
    cout << (ans.second - ans.first + 1) << endl;
    for (int i = ans.first; i <= ans.second; i++)
    {
        if (i == 0)
        {
            cout << a[i] << " ";
        }
        else
        {
            cout << a[i] - a[i - 1] << " ";
        }
    }

    return 0;
}		
		
