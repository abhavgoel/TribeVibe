class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        int mx = *max_element(groupSizes.begin(), groupSizes.end());
        for(int i = 1;i <= mx;i++){
            vector<int> v;
            for(int j = 0;j < groupSizes.size();j++){
                if(groupSizes[j] == i){
                    if(v.size() >= i){
                        ans.push_back(v);
                        v.clear();
                    }
                    v.push_back(j);
                }
            }
            if(v.size()) ans.push_back(v);
        }
        return ans;
    }
};