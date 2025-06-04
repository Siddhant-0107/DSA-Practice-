#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i, j;

    i = start;
    j = mid + 1;
    while (j <= end && i<=mid) 
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }}
        while (i <= mid)
        {
            temp.push_back(arr[i++]);
        }
    
   for(int i= 0;i<temp.size();i++){
    arr[i+start] =temp[i];
   }
}
void merge_sort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int main()
{
    vector<int> a = {9,7,5,8,81,6};
    merge_sort(a, 0, 5);
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}