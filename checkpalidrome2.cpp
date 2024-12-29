//https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
bool isPali(string s, int left,int right)
{
    while(left <= right)
    {
        if(s[left] !=  s[right])
        return false;
        left++;
        right--;
        
    }
    cout<<"it is a pali";
    return true;

  }
    bool validPalindrome(string s) {
        int left = 0, right = s.size()-1;
   while(left <= right)
   {
        if(s[left] == s[right])
        {
            left++;
            right--;
        }
        else{
            if(isPali(s, left+1, right) || isPali(s, left, right-1))
            {
                cout<<"It is a pali";
                return true;
            }
            else{
                cout<<"It is not a pali";
                return false;
            }
        }
   }
   cout<<"It is a pali";
   return true;
        }
   
};
