//https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int t = matrix.size() * matrix[0].size();
        int c = 0;
        vector<int> a;
        int srow = 0, lrow = matrix.size()-1, scol = 0, lcol = matrix[0].size()-1;
       
        while( c < t)
        {
            // First row
            for(int i = scol; i <= lcol && c < t;i++)
            {
                a.push_back(matrix[srow][i]);
                c++;
            }
            srow++;
            
            // last col
            for(int i = srow;i <= lrow && c < t;i++)
            {
                a.push_back(matrix[i][lcol]);
                c++;
            }
           
            lcol--;
            // last row
            for(int i = lcol; i >= scol && c < t;i--)
            {
                a.push_back(matrix[lrow][i]);
                c++;
            }
            lrow--;
            //first col
            for(int i = lrow;i >= srow && c < t;i--)
            {
                a.push_back(matrix[i][scol]);
                c++;
            }
            scol++;
       
        }
        return a;
    }
};
