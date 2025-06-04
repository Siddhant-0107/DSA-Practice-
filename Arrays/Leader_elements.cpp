#include<bits/stdc++.h>
using namespace std;
void leader_element(int arr[], int n)
{
    cout<< arr[n-1]<<" " ;
    int max = arr[n-1];
    for(int i = n-2; i>=0; i--)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>max)
            {
                cout<<arr[i]<<" " ;
                max= arr[i];
            }
        }
    }
}
int main()
{
    int a[] = {10, 22, 12, 3, 0, 6} ;
    leader_element(a, 6);
    return 0;
}