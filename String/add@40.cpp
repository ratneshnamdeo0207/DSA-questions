#include<iostream>
using namespace std;
// void add40(string *s)
// {
//     for(int i = 0;i < s.size();i++)
//     {
//         if(s[i] == ' ')
//         {
//             s.replace(i, 1, '@40');
//         }
//     }
//     cout<<s;
// }
void add402(string s)
{
    string temp = "";
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
   cout<<temp;
}
int main()
{
    string s = "My name is ratnesh";
    add402(s);
    return 0;
}