#include<bits/stdc++.h>
using namespace std ;
int majority_element(int arr[], int n)
{
    int count = 0, max = arr[0] ;
    for (int i = 0; i < n; i++)
    {
        if(count==0)
        {
            max = arr[i] ;
            count = 1 ;
        }
       else if(arr[i] == max)
        {
            count++ ;
        }
        else
        {
            count-- ;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == max)
        {
            count++ ;
        }
    }
    if(count > (int) n/2 )
    {
        return max ;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int a[] = {6,5,5} ;
   int c =  majority_element(a, 3) ;
    cout << c;
    return 0;
}