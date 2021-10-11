class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        unordered_map<int,int> freq;
        for(int i = 0;i < nums.size();i++) freq[nums[i]]++;
        for(int i = 0;i < nums.size();i++){
            if(freq[nums[i]] <= 0) continue;
            if(freq[nums[i]] > 0){
                int cur = nums[i];
                for(int j = cur;j < cur + k;j++){
                    if(freq[j] == 0) return false;
                    freq[j]--;
                }
            }
        }
        return true;
    }
};