//https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
        string a, word;
    for (int i = s.length()-1; i >= 0;i--)
    {
        if (s[i] == ' ')
            continue;
        while (i >= 0 && s[i] != ' ')

        {
            word.insert(word.begin(), s[i--]);

        }
        //cout<<word;
        a += " " + word;
        word.clear();
    }
    a.erase(0, 1);
    return a; 
    }
};
