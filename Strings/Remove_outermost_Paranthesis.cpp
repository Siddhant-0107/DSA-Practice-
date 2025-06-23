#include<bits/stdc++.h>
using namespace std;
 string removeOuterParentheses(string s) {
        int count=0, left=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(')
           {
            count++;
           }
           else if(s[i]==')')
           {
            count--;
           }
           if(count == 0)
        {
            s.erase(left,1);
            s.erase(i-1,1);
            left=i-1;
            i-=2;
           }

        }
        return s;
    }
    int main()
    {
        string s="(()())(())(()(()))";
       
        string ans = removeOuterParentheses( s);
        cout<<ans;

    }