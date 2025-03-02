//https://leetcode.com/problems/next-greater-element-i/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        vector<int> ans(nums1.size());
        for(int i = 0;i < nums1.size();i++)
        {
            int f = 0;
            int curr = nums1[i];
            auto in = find(nums2.begin(), nums2.end(), curr);

            for(int j =  in - nums2.begin() + 1;j< nums2.size();j++)
            {
                if(curr < nums2[j])
                {
                    ans[i] = nums2[j];
                    f = 1;
                    break;
                }
                
            }
            if(f == 0)
            {
                ans[i] = -1;
            }
        }
        return ans;
    }
};
