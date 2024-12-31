// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

class Solution {
public:
bool check(int count1[26], int count2[26])
{
    for(int i = 0;i < 26;i++)
    {
        if(count1[i] != count2[i])
            return 0;
    }
    return 1;
}
    bool checkInclusion(string s1, string s2) {
        int count[26] = {0};
    int count2[26] = {0};
    int m = s1.length();
    int n = s2.length();
    int i = 0;
    int j = 0;

    // first string
    //  cout<<"count1"<<endl;
    for(int i = 0; i < s1.length();i++)
    {
        int index = s1[i] - 'a';
        count[index]++;
    }

    // a(count);

    // II string
    for(int i = 0; i < s2.length() && i < s1.length();i++)
    {
        int index = s2[i] - 'a';
        count2[index]++;
    }
    // cout<<endl<<"coouint2"<<endl;
    // a(count2);

    if(check(count, count2))
    return 1;
  
    cout<<"Final loop start"<<endl;
    i = s1.length();
    while(i < n)
    {
        char newc = s2[i++];
        int index = newc - 'a';
        count2[index]++;
        
        char oldc = s2[i-s1.length()-1];
        index = oldc - 'a';
        count2[index]--;

        // a(count2);

       if(check(count, count2)){
    // cout<<"true"; 
        return 1;
       }
    }
    // cout<<"false";
    return 0;
    }
};
