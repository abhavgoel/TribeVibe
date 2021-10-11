class Solution {
public:
    int integerBreak(int n) {
        int dp[n + 1];
        
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        
        for(int i = 3; i <= n; i++){
            dp[i] = INT_MIN;
            for(int j = i - 1; j >= 2; j--){
                dp[i] = max(max(dp[j]*(i - j), j*(i - j)), dp[i]);
            }
        }
        return dp[n];
    }
};