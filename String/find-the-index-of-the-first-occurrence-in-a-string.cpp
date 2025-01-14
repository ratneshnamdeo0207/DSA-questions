//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 int strStr(string haystack, string needle) {
       
        for(int i = 0;i < haystack.length();i++)
        {
            if(haystack[i] == needle[0])
            {
                int i2 = i+1, j = 1;
                if(needle.length() == 1 && haystack[i] == needle[0]){
                
                return i;
                }
                while(j < needle.length() && i2 < haystack.length() )
                {
                    if(haystack[i2] == needle[j]){
                        i2++; j++;
                    }
                    else{
                        break;
                    }
                    if( j == needle.length())
                        return i;
                }
        
            }

        }
        return -1;
        
    }
