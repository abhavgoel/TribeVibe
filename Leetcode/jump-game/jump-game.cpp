class Solution {
public:
    bool canJump(vector<int>& nums) {
       int cur=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
          if(cur<i) return 0;
            cur=max(cur,i+nums[i]);
            if(cur>=n) break;
        }
        return 1;
    }
};