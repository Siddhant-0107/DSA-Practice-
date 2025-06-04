#include<bits/stdc++.h>
using namespace std ;
void set_matrix_zero(int arr[][100] ,int row, int column)
{
   
    int col0= -1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(arr[i][j] ==  0)
            {
                arr[i][0]=0;
                if(j==0)
                col0 = 0;
                else
                arr[0][j]=0;
            }
        }
        
    }
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {   
            if(arr[i][j]!=0)
            if(arr[i][0] ==  0||arr[0][j]==0)
            {
                arr[i][j]=0;
            }
           
        }
    }
    if(col0==0)
    {
        for(int i=0;i<row;i++)
        arr[i][0]=0;
    }
     if(arr[0][0]==0)
    {
        for(int i=0;i<column;i++)
        arr[0][i]=0;
    }

    
    return ;
}

int main()
{
    int a[][100] ={{1,1,1},{1,0,1},{1,1,1}};
    set_matrix_zero(a,3,3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" " ;
        }
        cout<<endl;
        
    }
}