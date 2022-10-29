class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int x=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();++i){
            if(left==x-nums[i]-left){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};
