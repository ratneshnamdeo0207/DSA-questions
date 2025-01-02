// https://leetcode.com/problems/search-a-2d-matrix/
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int s = 0, e = rows * cols -1;
        while( s<= e)
        {
            int m = s + (e - s)/2;
            int element = matrix[m/cols][m%cols];
            if(element == target)
            return true;
            else if(element > target)
            {
                e = m -1;
            }
            else{
                s = m + 1;
            }
        }
        return false;
    }
