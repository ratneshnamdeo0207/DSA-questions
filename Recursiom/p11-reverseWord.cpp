#include<iostream>
using namespace std;
void reverseWord(string& s, int sa, int e)
{
    //   cout<<&s;
    if(sa > e)
        return ;
    swap(s[sa++],s[e--]);
    reverseWord(s, sa, e);
}
void reverseWord2(string s, int sa, int e)
{
    //   cout<<&s;
    if(sa > e)
        return ;
    swap(s[0],s[e--]);
    reverseWord(s, sa, e);
}
int main()
{
    string s = "abcde";
    // cout<<&s;
    reverseWord(s, 0, s.length()-1);
    cout<<s;
    return 0;
}