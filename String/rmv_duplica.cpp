// unsolved 
#include<iostream>
using namespace std;
bool checkequal(int a[], int b[])
{
    for(int i = 0;i < 26;i++)
    {
        if(a[i] != b[i])
        return 0;
    }
    return 1;
}

string rem_dup(string s1, string s2)
{
    int count1[26] = {0};
    int i = 0;
    while( i < s1.size())
    {
        int index = s1[i] -'a';
        count1[index]++;
        i++;
    }
    int count2[26] = {0};
    i =  0;
    while(i < s2.size())
    {
        int index = s2[i] -'a';
        count2[index]++;
        i++;
    }
    if(checkequal(count1, count2))
    {
        return 1;
    }
    while(i < )
    {

    }
}
int main()
{
    string s1 = "ab", s2 = "eidbaooo";

    return 0;
}