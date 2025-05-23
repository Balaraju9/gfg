class Solution {
  public:
    int fun(int m, int n, int x, int s, vector<vector<int>> &dp){
        if (n == 0) {
            return s == x ? 1 : 0;
        }
        if (dp[n][s] != -1) {
            return dp[n][s];
        }

        int count = 0;
        for (int i = 1; i <= m; i++) {
            if (s + i <= x) {
                count += fun(m, n - 1, x, s + i, dp);
            }
        }

        dp[n][s] = count;
        return count;
    }

    int noOfWays(int m, int n, int x) {
        vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
        return fun(m, n, x, 0, dp);
    }
};
