class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int>v(nums.size(),0),ar(nums.size(),0);
        int x=0,mx1=1;
    for(int i=nums.size()-1;i>=0;i--)
       {
           for(int j=i;j<nums.size();j++)if(nums[i]<nums[j])ar[i]=max(ar[i],ar[j]);
           ar[i]+=1;
          mx1=max(mx1,ar[i]);
       }
        for(int i=nums.size()-1;i>=0;i--)
        {
            for(int j=i;j<nums.size();j++) if(nums[i]<nums[j]&&ar[i]-1==ar[j]) v[i]+=v[j];
            if(!v[i])v[i]=1;
        }
         for(int i=0;i<nums.size();i++) if(mx1==ar[i])x+=v[i];
        return x;
    }
};