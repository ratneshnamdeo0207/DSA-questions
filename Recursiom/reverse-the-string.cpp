//https://www.naukri.com/code360/problems/reverse-the-string_799927?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h> 
void reverseWord(string& s, int sa, int e)
{
    //   cout<<&s;
    if(sa > e)
        return ;
    swap(s[sa++],s[e--]);
    reverseWord(s, sa, e);
}
string reverseString(string str)
{
	reverseWord(str, 0, str.length()-1);
	return str;
}
