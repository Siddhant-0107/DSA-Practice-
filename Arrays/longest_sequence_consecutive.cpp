#include<bits/stdc++.h>
using namespace std;
int largest_sequence_consequtive(int arr[], int n)
{
    unordered_set <int> st ;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]) ;
    }
    int count =0, longest=0 ;
    for (int i = 0; i < n; i++)
    {   
        count=0;
        int x = arr[i]-1 ;
        if(st.find(x) != st.end())
        {
            while(st.find(x++) != st.end())
            {
                count++ ;
                if(count>longest)
                {
                    longest = count ;
                }
            }
        }
    }
    return longest;
}

int main(){
    int a[] = {100, 200, 1, 3, 2, 4};
    cout<<largest_sequence_consequtive(a, 6);
    return 0;
}