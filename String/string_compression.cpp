#include<iostream>
#include<vector>
using namespace std;
void string_compression(vector<char> a )
{

    string s = "";
    int count = 0;
    for(int i = 0; i < a.size();)
    {
       s += a[i];
       int j = i+1;
       while(a[j] == a[i] && j < a.size())
       {
        count++;

        cout<<count<<endl;
        j++;
       }
       s+= to_string(count);
       count = 0;
       i = j;
       
       for(char c: s)
       {
        cout<<c<<" ";
       }
       cout<<endl;
       
    }
    cout<<s.size();
}
int main()
{
    vector<char> a = {'a', 'a'};
    string_compression(a);
    // int count = 1;
    // string s ="";
    // s+= to_string(count);
    // cout<<s;
    return 0;
}