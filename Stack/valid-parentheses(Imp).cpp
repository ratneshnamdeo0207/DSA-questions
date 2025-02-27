//https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        
        if(s.size() == 1)
        return false;
        stack<int> st;
        //()

        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == '[' || s[i] == '{' || s[i] == '(' )
            {
                st.push(s[i]);
            }
            else{
                if(!st.empty())
                {
                    char top = st.top();
                 if((top == '(' && s[i] == ')') || (top == '{' && s[i] == '}') || (top == '[' && s[i] == ']'))
                 {
                    st.pop();
                 }
                 else{
                    return false;
                 }
                }
                else{
                    return false;
                }
            }
        }
        bool b = false;
        if(st.empty())
        {
            b = true;
        }
        return b;

    }
};
