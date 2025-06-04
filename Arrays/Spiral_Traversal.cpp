#include<bits/stdc++.h>
using namespace std;
void spiral_traversal(int arr[][100], int row, int column)
{
    int top =0, right = column-1, bottom= row-1, left = 0;
    while(top<=bottom && left<=right)
    {
        for(int i= left; i<=right;i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top ; i<=bottom;i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;
        for(int i= right; i>=left;i--)
        {
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        for(int i= bottom; i>=top;i--)
        {
          cout<<arr[i][left]<<" ";
        }
        left++;
    }
    return ;
}
int main()
{
    int a[][100]= { { 1, 2, 3 },
	              { 4, 5, 6 },
		      { 7, 8, 9 } };
    spiral_traversal(a,3,3);
    return 0;
    
}