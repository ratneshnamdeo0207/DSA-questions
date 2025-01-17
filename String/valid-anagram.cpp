// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        for(int i = 0;i < s.length();i++)
        {
            int index = s[i]-'a';
            a[index]++;
        }
        for(int i = 0;i < t.length();i++)
        {
            int index = t[i]-'a';
            b[index]++;
        }
        for(int i = 0;i < 26;i++)
        {
            if(a[i] != b[i])
                return 0;
        }
        return 1;
    }
};
