class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
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
};
