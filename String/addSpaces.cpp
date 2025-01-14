#include<iostream>
#include<vector>
using namespace std;

 string addSpaces(string s, vector<int>& spaces) {
        for(int i = 0;i < spaces.size();i++)
        {
            s.insert(spaces[i] + i, 1, ' ');
        }
        cout<<s;
        return s;
    }
    string addSpaces2(string s, vector<int>& spaces) {
        int m = s.size();
        int n = spaces.size();
        int j=0;
        string ans = "";
        for(int i = 0;i < m;i++)
        {
           if(i == spaces[j])
           {
                ans+= ' ';
                j++;
           }
           ans += s[i];
        }
        cout<<ans;
        return ans;
    }
int main()
{
     string s = "LeetcodeHelpsMeLearn"; 
    //  s.insert(8, 1, ' ');
    //  s.insert(13, 1, ' ');
    //  s.insert(15, 1, ' ');
    //  cout<<s<<endl;
    //  return 0 ;
     vector<int> spaces = {8,13,15};
     addSpaces(s, spaces);
    return 0;
}