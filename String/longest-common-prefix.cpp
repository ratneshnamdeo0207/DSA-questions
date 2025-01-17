// https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pr = "";
        if(strs[0].size() ==  0)
        return pr;
        int sindex = 0;
        for(int i = 0;i <strs[0].size();i++)
        {
            char x = strs[sindex][i];
            int j1 = sindex + 1, j2 = i, k = 1;
            while(j1 < strs.size() && j2 < strs[j1].size())
            {
                if(x != strs[j1][j2])
                {
                    k = 0;
                    return pr;
                }
                j1++;
            }
            if(j1 == strs.size() && k == 1)
            {
                pr += x;
            }
            
        }
    // cout<<pr;
    return pr;
    }
};
