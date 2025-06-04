//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int> ans;
        deque<int> d;
        
        for(int i = 0;i < k;i++)
        {
            if(arr[i] < 0)
            {
                d.push_back(i);
            }
        }
        if(d.size() > 0)
        {
            ans.push_back(arr[d.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        for(int i = k;i < arr.size();i++)
        {
            if(!d.empty() && i - d.front() >= k)
            {
                d.pop_front();
            }
            if(arr[i] < 0)
            {
                d.push_back(i);
            }
             if(d.size() > 0)
            {
                ans.push_back(arr[d.front()]);
            }
            else{
                ans.push_back(0);
            }
            
        }
        return ans;
    }
};
