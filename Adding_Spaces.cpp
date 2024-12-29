class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       int m = s.size();
        int n = spaces.size();
        int j=0;
        string ans = "";
        for(int i = 0;i < m;i++)
        {
           if(j < n && i == spaces[j])
           {
                ans+= ' ';
                j++;
           }
           ans += s[i];
        }
        // cout<<ans;
        return ans;
    }
};
