class Solution {
public:
    int combinationSum4(vector<int>& nums, int sum) {
        int n=nums.size();
        vector<unsigned int>dp(sum+1);
        dp[0]=1;
        
        for(int i=1;i<=sum;i++){
            for(int j=0;j<n;j++){
                if(nums[j]<=i) dp[i]=dp[i]+dp[i-nums[j]];
            }
        }
        return dp[sum];
    }
};