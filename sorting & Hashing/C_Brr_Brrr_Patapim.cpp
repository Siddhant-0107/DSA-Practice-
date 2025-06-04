#include<bits/stdc++.h>
using namespace std;
int solve(){
 int n;
 cin>>n;
 vector<vector<int>> matrix(n,vector<int> (n));
 for (int i = 0; i < n; i++)
 for (int j = 0; j < n; j++)
 {
 cin>>matrix[i][j];
 }
 
 vector<int> per(2*n);
per[0]=2*n+1;

int row=0;
for(int k=0;k<n;k++)
{
    per[row+k+1] = matrix[row][k];
}
int col=n-1;
for (int i = 1; i < n; i++)
{
per[i+col+1]= matrix[i][col];
}
int i=0;int j=0;
int sum=0;
for(i=1;i<2*n;i++){
    sum+=per[i];
    
}
per[0]= 2*n*(2*n+1)/2-sum;

for (int i = 0; i < 2*n; i++)
{
    cout<<per[i]<<' ';
}
return 0;

}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
