//769 - https://leetcode.com/problems/rotate-string/
//Optimized solution 
bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
        return false;
        return (s+s).find(goal) != string::npos;
    }
bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
        return false;
       if((s+s).find(goal) == -1)
               return false;
        else 
               return true;
    }

class Solution {
private:
string rotate(string s)
{
    string temp= s;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        temp[(i + 1)% n] = s[i];
    }
    
    return temp;
}
public:
   bool rotateString(string s, string goal) {
      
        if(goal.size() != s.size())
        {
            return false;
        }
        //Input: s = "acbde", goal = "cdeab"
        if(s == goal)
        return true;
        string r = s;
        for(int i = 0;i < s.size();i++)
        {
           r = rotate(r);
            cout<<r<<endl;
            if( r == goal)
            return true;
        }
        return false;
    }
};
