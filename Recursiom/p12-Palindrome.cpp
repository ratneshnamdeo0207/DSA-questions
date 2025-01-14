#include<iostream>
using namespace std;
bool checkPali(string s, int i)
{
    int n = s.length();
    if((n/2) <= i)
        return true;
    if(s[i] != s[n-i-1])
        return false;
    return checkPali(s, i+1);
}
int main()
{
    string s = "10011";
    if(checkPali(s, 0))
        cout<<"It is a pali";
    else    
        cout<<"it is not a pali";
    return 0;
}