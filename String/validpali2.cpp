// mistake u start checking in the while loop(s[start] <= s[end])

#include<iostream>
using namespace std;
void checkPali1(string s)
{
   int sa = 0, e = s.size()-1;
   int c = 0;
   while(sa <= e)
   {
        if(s[sa] == s[e])
        {
            sa++; e--;
        }
        else
         c = 1; break;
   }
   if( c == 0)
    {
        cout<<"It is a pali";
        return;
    }
    else {
            c = 0;
            int sa2 = sa, e2 = e-1;
            while(sa2 <= e2)
            {
                if(s[sa2] == s[e2])
                {
                    sa2++; e2--;
                }
                else
                {
                     c = 1;break;
                }
            }
            if(c == 0)
            {
                cout<<"It is a pali";
                return;
            }
            else{
                c = 0;
                int sa2 = sa+1, e2 = e;
            while(sa2 <= e2)
            {
                if(s[sa2] == s[e2])
                {
                    sa2++; e2--;
                }
                else
                {
                     cout<<"it is not a pali";
                     return;
                }
            }
            
        }
       
   }
    cout<<"it is a pali";
            return;

}
#include<iostream>
using namespace std;
bool isPali(string s, int left,int right)
{
    while(left <= right)
    {
        if(s[left] !=  s[right])
        return false;
        left++;
        right--;
        
    }
    cout<<"it is a pali";
    return true;

}
bool checkPali2(string s)
{
   int left = 0, right = s.size()-1;
   while(left <= right)
   {
        if(s[left] == s[right])
        {
            left++;
            right--;
        }
        else{
            if(isPali(s, left, right-1) || isPali(s, left+1, right))
            {
                cout<<"It is a pali";
                return true;
            }
            else{
                cout<<"It is not a pali";
                return false;
            }
        }
   }
   cout<<"It is a pali";
   return true;
}

int main()
{
    string s = "atbbga";
    checkPali2(s);
    
    return 0;
}