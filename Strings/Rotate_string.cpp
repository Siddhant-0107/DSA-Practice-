#include<bits/stdc++.h>
using namespace std;
string perm(string &s)
{
    char temp = s[0];
    s.erase(0,1);
    s+= temp;
    return s;
}
bool rotateString(string s, string goal) {
     if(s.size()!= goal.size())
     {
        return false;
     }
     int n= s.size();
     for(int i=0;i<n;i++)
     {
        string check = perm(s);
        if(check==goal)
        return true;
     }
     return false;
       
    }
    int main()
    {
        string s="abcde";
        string goal ="cdeab";
        bool ans= rotateString(s, goal);
        cout<< ans;
    }