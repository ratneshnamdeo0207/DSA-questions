//https://leetcode.com/problems/count-primes/
int countPrimes(int n) {
        vector<bool> a(n+1, 1);
        a[0] = a[1] = 0;
        int cnt = 0;
        for( int i = 2; i < n;i++)
        {
            if(a[i])
            cnt++;
            for(int j = 2 * i;j < n;j += i)
            {
                a[j] = 0;
            }
        }
        return cnt;
    }
