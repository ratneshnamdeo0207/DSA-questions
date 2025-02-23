//https://leetcode.com/problems/find-all-duplicates-in-an-array/
vector<int> findDuplicates(vector<int>& nums) {
        vector<int> a;
        for(int i = 0;i < nums.size();i++)
        {
            int index = abs(nums[i]) - 1;
            if(nums[index] < 0)
            {
                a.push_back(index + 1);
            }
            else{
                nums[index] = -nums[index];
            }
        }
        return a;
    }
