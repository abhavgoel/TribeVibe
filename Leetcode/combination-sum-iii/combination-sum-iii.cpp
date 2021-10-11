class Solution {
public:
    vector<vector<int>>ans;
    void find(int ind,int k,int n,vector<int>& v,int sum){
        if(sum>n) return;
        if(k==0 && sum==n){
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<=9;i++){
            v.push_back(i);
            find(i+1,k-1,n,v,sum+i);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n){
        vector<int> v;
        find(1,k,n,v,0);
        return ans;
    }
};