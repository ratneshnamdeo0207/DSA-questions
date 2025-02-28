//https://www.naukri.com/code360/problems/minimum-cost-to-make-string-valid_1115770
#include <bits/stdc++.h> 
int findMinimumCost(string s) {
    if(s.length() % 2 != 0)
      return -1;
    
    stack<char> st;

    for(int i = 0;i < s.size();i++)
    {
      char ch = s[i];
      if(ch == '{')
      {
        st.push(ch);
      }
      else{
        if(!st.empty() && st.top() == '{')
        {
          st.pop();
        }
        else{
          st.push(ch);
        }
      }
    }
    int a = 0, b = 0;
    while(!st.empty())
    {
      char ch = st.top();
      if(ch == '{'){
         a++;
      }
     
      else
      {
        b++;
      }
      
      st.pop();
    }
    int ans = (a +1)/2 + (b+1)/2;
    return ans;
}
