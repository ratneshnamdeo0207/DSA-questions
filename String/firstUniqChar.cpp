//https://leetcode.com/problems/first-unique-character-in-a-string/
class Solution {
public:
    int firstUniqChar(string s) {
     
    int ans = -1;
        vector<int> a(26, 0);
        for(int i = 0 ;i < s.length();i++)
        {
            int index = s[i] - 'a';
            a[index]++;
        }
        // print(a);
         for(int i = 0 ;i < s.length();i++)
        {
            int index = s[i] - 'a';
            if(a[index] == 1){
                ans = i; 
                break;
            }
        }
        return ans;
    }
};
