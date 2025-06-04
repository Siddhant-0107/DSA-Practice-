#include <bits/stdc++.h>
using namespace std;
int single_finder(int arr[], int n)
{
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}
int main()
{
    int a[] = {4, 1, 2, 1, 2};
    int k = single_finder(a, 5);
    cout << k;
    return 0;
}