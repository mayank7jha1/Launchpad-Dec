class Solution {
public:
    int dp[101][101];

    int Solve(int m, int n) {
        if (m == 0 and n == 0) {
            return 1;
        }

        if (m < 0 or n < 0) {
            return 0;
        }

        if (dp[m][n] != -1) {
            return dp[m][n];
        }

        int op1 = Solve(m - 1, n);
        int op2 = Solve(m, n - 1);

        return dp[m][n] = op1 + op2;
    }

    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        return Solve(m - 1, n - 1);
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[101][101];

        if (m == 1 and n == 1) {
            return 1;
        }

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 or j == 1) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }

        }

        return dp[m][n];
    }
};







