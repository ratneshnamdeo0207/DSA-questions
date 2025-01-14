#include<iostream>
using namespace std;
void max_occuring(string s)
{
    int arr[26] ={0};
    int maxi, max = -1;
    int index;
    for(int i = 0;i < s.size();i++)
    {
            index = s[i] - 'a';
            // cout<<index;
        
        arr[index]++;
        if(max < arr[index])
        {
            max = arr[index];
            maxi = index;
        }
    }
     // cout<<"max  = " << max<<endl;
    cout<<"maxi = " <<(char) (maxi  + 97);
}
void max_occuring(string s)
{
    int arr[26] ={0};
    int maxi = -1, max = 0;
    int index;
    for(int i = 0;i < s.size();i++)
    {
            index = s[i] - 'a';
            // cout<<index;
        
        arr[index]++;
    }
    for(int i = 0;i < 26;i++)
    {
         if(max < arr[i])
        {
            max = arr[i];
            maxi = i;
            
        }
    }
     // cout<<"max  = " << max<<endl;
  char ch = 'a' + maxi;
  return ch;
}
int main()
{
    cout<<"Enter String:";
    string s;
    cin>>s;
    max_occuring(s);
    return 0;
} 