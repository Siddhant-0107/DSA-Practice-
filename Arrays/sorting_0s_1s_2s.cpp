#include<bits/stdc++.h>
using namespace std;
void sorting_0s_1s_2s(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            {
                swap(arr[mid], arr[high]);
                high-- ;
            }
        }
    }
}
int main()
{
    int a[] = {2,0,2,1,1,0} ;
    sorting_0s_1s_2s(a, 6) ;
    for(auto it :a){
        cout<<it<<" " ;
    }
}