//https://leetcode.com/problems/search-a-2d-matrix-ii/
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int srow = 0;
        int ecol = cols -1;
        while(srow < rows && ecol >= 0)
        {
            int element = matrix[srow][ecol];
            if(element == target)
            {
                return 1;
            }
            if(element < target)
            {
                srow++;
            }
            else{
                ecol--;
            }
    }
    return 0;
    }
