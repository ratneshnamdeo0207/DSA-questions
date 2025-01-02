// https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1
class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        int cnt = 0;
        int n = arr.size();
        vector<int> prefixSum(n, 0);
        prefixSum[0] = arr[0];
        for(int i = 1;i < n;i++) 
        {
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }
        unordered_map<int, int> m;
        for(int j = 0; j < n;j++)
        {
            if(prefixSum[j] == k)
            cnt++;
            int val = prefixSum[j] - k;
            if(m.find(val) != m.end())
            {
                cnt+= m[val];
            }
            if(m.find(prefixSum[j]) == m.end())
            {
                m[prefixSum[j]]=0;
            }
             m[prefixSum[j]]++;
        }
        return cnt;
    }
