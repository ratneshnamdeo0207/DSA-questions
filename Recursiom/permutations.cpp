// https://leetcode.com/problems/permutations/
class Solution {
private:
void solve(vector<int> nums, vector<vector<int>>& ans, vector<int> out, int index)
{
    if(index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i = index;i < nums.size();i++)
    {
        swap(nums[index], nums[i]);

        solve(nums, ans, out, index+1);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> out;
        int index = 0;
        solve(nums, ans, out, index);
        return ans;

    }
};
