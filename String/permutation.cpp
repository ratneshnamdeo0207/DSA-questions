#include<iostream>
using namespace std;
check(int count1[26], int count2[26])
{
    for(int i = 0;i < 26;i++)
    {
        if(count1[i] != count2[i])
            return 0;
    }
    return 1;
}
void a(int arr[26])
{
    cout<<"Array start here"<<endl;
    cout<<"--------------------------"<<endl;
    for(int i = 0;i < 26;i++)
    {
        char c = i+'a';
       cout<<c<<" - "<<arr[i]<<endl;
    }
   cout<<"--------------------------"<<endl;

}
void permutation(string s1, string s2)
{
    
}
int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    permutation(s1, s2);
    return 0;
}