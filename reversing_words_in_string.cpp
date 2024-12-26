

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
int main()
{
    string s = "Nikola Tesla is a genius";
    reverse_string(s);
    return 0;
}
