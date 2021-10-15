class Solution {
public:
	int longestSubarray(vector<int>& nums, int limit) {
        int ans = 0;
        deque<int> minQ,maxQ;
        int s = 0,e = 0;
        while(e < nums.size()){
            int x = nums[e];
            while(!minQ.empty() && nums[minQ.back()] >= x) minQ.pop_back();
            minQ.push_back(e);
            while(!maxQ.empty() && nums[maxQ.back()] <= x) maxQ.pop_back();
            maxQ.push_back(e);
            
            int currMin = nums[minQ.front()];
            int currMax = nums[maxQ.front()];
            
            if(currMax - currMin > limit){
                s++;
                if(s > minQ.front()) minQ.pop_front();
                if(s > maxQ.front()) maxQ.pop_front();
            }
            else {
                ans = max(ans,e - s + 1);
                e++;
            }
        }
        return ans;
    }
};