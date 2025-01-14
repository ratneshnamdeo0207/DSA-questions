

#include<iostream>
using namespace std;
void reverse_string(string s)
{
    for(int i = s.size()-1; i >=0;)
    {
        if(s[i] == ' ')
        {
            continue;
        }
        string word;
        int j = i;
        while(j != -1 && s[j] != ' ')
        {    
            word += s[j];
            j--;
        }
        // cout<<endl<<word<<endl; 
        if(j == 0)return;
        s.replace(j + 1, word.size(), word);

        i = j -1;
        word.clear();
       
        
    }
     cout<<endl<<s;
}
void reverse_string2(string s)
{
    int j;
    string word;
    for(int i = 0;i < s.size();)
    {
        if(s[i] == ' ')
         continue;
         j = i;
        while(j < s.size() && s[j] != ' '   )
        {
            word.insert(word.begin(), s[j++]);
        }
        // cout<<word;
        // break;
        s.replace(i, word.size(), word);
        
        word.clear();
        i = j+1;

    }
    cout<<s;

}

void reverse_string3(string s)
{
    int j;
    string word, ans;
    for(int i = s.size()-1;i>= 0;i--)
    {
        if(s[i] == ' ')
            continue;
        j = i;
        while(j >= 0 && s[j] != ' ')
        {
            word.insert(word.begin(), s[j--]);
        }
        // cout<<word;
      
        ans += word + ' ';
        // cout<<ans;
        word.clear();
        i = j;

    }
    ans.erase(ans.size()-1,1);
    cout<<ans;
}

int main()
{
    
    string s = "hello wordl";
    reverse_string3(s);
    return 0;
}