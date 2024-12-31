//https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
class Solution {
  public:

   int longestConsecutive(vector<int>& arr) {
    vector<int> a(100006, 0);  // Array to mark the presence of numbers

    // Mark elements in 'a' based on elements in 'arr'
    for (int i = 0; i < arr.size(); i++) {
        a[arr[i]] = 1;
    }

    int cnt = 0, ans = 0;
    // Iterate through 'a' to find the longest consecutive sequence
    for (int i = 0; i < 100006; i++) {
        if (a[i]) {
            cnt++;  // Increment count if the element exists
        } else {
            cnt = 0;  // Reset count if the element doesn't exist
        }
        ans = max(ans, cnt);  // Update the maximum length of consecutive sequence
    }

    return ans;
}

};

