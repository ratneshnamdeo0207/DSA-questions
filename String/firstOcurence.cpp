#include<iostream>
using namespace std;
 int strStr(string haystack, string needle) {
       
        for(int i = 0;i < haystack.length();i++)
        {
            cout<<"1"<<endl;
            if(haystack[i] == needle[0])
            {
                int i2 = i+1, j = 1;
                cout<<"2"<<endl;

                if(needle.length() == 1 && haystack[i] == needle[0]){
                     cout<<"3"<<endl;
                return 0;
                }
                while(j < needle.length() && i2 < haystack.length() )
                {
                     cout<<"4"<<endl;
                    if(haystack[i2] == needle[j]){
                        i2++; j++;
                    }
                    else{
                        break;
                    }
                    if( j == needle.length())
                    {
                      cout<<"5"<<endl;   return i;
                    }
                }
        
            }

        }
         cout<<"6"<<endl;
        return -1;
        
    }
    int main()
    {
        string haystack = "a", needle = "a";
        int x = strStr(haystack, needle);
        if(x == -1)
        {
            cout<<"needle not found";
        }
        else{
            cout<<"needle found at "<<x;
        }
        return 0;
    }