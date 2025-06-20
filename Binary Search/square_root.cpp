#include<bits/stdc++.h>
using namespace std;
int square_root( int n)
{
    int low=1, high=n, ans=0;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(mid*mid<=n)
        {
            ans=mid;
            low=mid+1;
        }
        else 
        {
            high= mid-1;
        }
    }
    return ans;
}
int main()
{
    
    int s =square_root(28);
    cout<<s;
}