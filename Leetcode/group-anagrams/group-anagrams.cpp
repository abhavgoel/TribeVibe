class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        unordered_map<string,vector<string>> mp;
        int n = strs.size();
        string temp;
        
        for(int i =0;i<n;++i){
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        
        vector<vector<string>> res;
        for(auto i: mp) res.push_back(i.second);
        
        return res;
    }
};