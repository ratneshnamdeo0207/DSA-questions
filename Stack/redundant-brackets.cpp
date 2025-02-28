//https://www.naukri.com/code360/problems/redundant-brackets_975473
#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i = 0;i < s.size();i++)
    {
        
        char ch = s[i];
       // cout<<s[i]<<" ";
        if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            st.push(s[i]);
        }
        else{
            if(s[i] == ')'){
            bool isRedundant = true;
            while(st.top() != '(')
            {
                char top = st.top();
                if(top == '+' || top == '-' || top == '/' || top == '*')
                {
                    isRedundant = false;
                }
                st.pop();
            }
            if(isRedundant == true)
            return true;
            st.pop();
            }
        }
    }
    return false;
}
