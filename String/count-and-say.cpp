//https://leetcode.com/problems/count-and-say/
class Solution {
    private:
    string solve(string s) //21
    {
        string ans = "";
        string t = "";
        for(int i = 0;i < s.size(); i++)
        {
           if(s[i] == ' ')
           {
            continue;
           }
            
           int j = i + 1;  //1
           int c = 1;
           while(j < s.size() && s[i] == s[j])//2
           {
                c++; //2
                j++; //2
           }
            ans += to_string(c) + s[i]; //1211
            i = j-1; //0
        }
        return ans;
    }
public:
    string countAndSay(int n) {
        if (n == 1)
        return "1";
        string ans = "1";
        for(int i = 1;i < n;i++){
            ans = solve(ans);//21
            cout<<ans<<" ";
        }
        
        return ans;
    }
};
