//https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution {
    private:
    void solve(string digits, vector<string> & ans, string out, int index, string map[])
    {
        if(index >= digits.length())
        {
         
                ans.push_back(out);
                return;
        }
        int digit = digits[index] - '0';
        string s = map[digit];
        for(int i = 0;i < s.length();i++)
        {
            out.push_back(s[i]);
            solve(digits, ans, out, index + 1, map);
            out.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0)
            return ans;

        string out;
        int index = 0;
        string map[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, ans, out, index, map);
        return ans;
    }
};
