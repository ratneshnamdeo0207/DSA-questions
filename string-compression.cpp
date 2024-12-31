//https://leetcode.com/problems/string-compression/

class Solution {
public:
    int compress(vector<char>& a) {
        if(a.size() == 1)
        return 1;
         string s = "";
        int count = 1;

    for(int i = 0; i < a.size();)
    {
        s += a[i];
        int j = i+1;

       while( j < a.size() && a[j] == a[i]  )
       {
        count++;

        // cout<<count<<endl;
        j++;
       }
       if(count > 1)
       s+= to_string(count);
       count = 1;
       i = j;
       
    //    for(char c: s)
    //    {
    //     cout<<c<<" ";
    //    }
    //    cout<<endl;
      
    }
     for(int i = 0;i < s.size();i++)
       {
        a[i] = s[i];
       }
   return s.size();
    }
};
