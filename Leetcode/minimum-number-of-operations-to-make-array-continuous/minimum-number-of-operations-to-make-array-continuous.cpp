class Solution {
public:
    int minOperations(vector<int>& nums) {
        int total = nums.size(),  ans = nums.size();;
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(int i = 0, j = 0; i < nums.size(); i++) {
            while(j < nums.size() and nums[j] < nums[i] + total) {
                j++;
            }
            ans = min(ans, total - (j - i));
        }
        return ans;
    }
};