#include<bits/stdc++.h>
using namespace std;
int stock_buy_sell(int arr[], int n)
{
    int min= arr[0], max_diff =0, diff;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        diff = arr[i]- min ;
        max_diff = max( max_diff, diff);
    }
    return max_diff ;
}
int main()
{
    int a[] ={7,6,4,3,1};
    cout<<stock_buy_sell(a,5);
    return 0;
}