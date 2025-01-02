//https://www.naukri.com/code360/problems/print-like-a-wave_893268
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    int cnt = 0;
    bool t = true;
    int j = 0;
    vector<int> a;
    while(cnt != (nRows * mCols) && j < mCols)
    {
        
        // down
        if(t)
        {
            for(int i = 0;i < nRows;i++)
            {
                // cout<<arr[i][j]<<" ";
               a.push_back(arr[i][j]); 
                cnt++;
            }
            t = false;
            
        }
        else{
            for(int i = nRows-1;i >= 0;i--)
            {
                // cout<<arr[i][j]<<" ";
                a.push_back(arr[i][j]); 
                cnt++;
            }
            t = true;
            
        }
        j++;
        // up
    }
    return a;
}
