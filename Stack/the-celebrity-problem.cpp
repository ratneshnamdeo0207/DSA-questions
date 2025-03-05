//https://www.geeksforgeeks.org/problems/the-celebrity-problem/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
cla//ss Solution {
    private:
    bool knows(vector<vector<int> >& mat, int a, int b)
    {
        if(mat[a][b] == 1)
        {
            return false;
        }
        else
        return true;
    }
  public:
    int celebrity(vector<vector<int> >& mat) {
        
        stack<int> s;
        for(int i = 0;i < mat.size();i++)
        {
            s.push(i);
        }
        while(s.size() > 1)
        {
            int a = s.top();//1
            s.pop();
            int b = s.top();//0
            s.pop();
            if(knows(mat, a, b))
            {
                // cout<<"Push - "<<a;
                s.push(a);
            }
            else{
                
                // cout<<"Push - "<<b;
                s.push(b);
            }
        }
        
        int ans = s.top();
        // cout<<ans<<" ";
        int zero = 0;
        for(int i = 0;i < mat.size();i++)
        {
            if(mat[ans][i] == 0)
            {
                zero++;
            }
        }
        // cout<<"a"<<" ";
        if(zero !=  mat.size()-1)
            return -1;
        int one = 0;
        for(int i = 0;i < mat.size();i++)
        {
            
            if(mat[i][ans] == 1)
            {
                one++;
            }
        }
        // cout<<"b"<<" ";
         if(one !=  mat.size())
            return -1;
        
        return ans;
    }
};
