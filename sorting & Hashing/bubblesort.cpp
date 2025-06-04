#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr, int n)
{

    int maxi = 0;
    for (int i = 0; i < n-1; i++)
    {
        // 9,7,5,8,81,6
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {9, 7, 5, 8, 81, 6};
    bubble_sort(a, 6);
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}