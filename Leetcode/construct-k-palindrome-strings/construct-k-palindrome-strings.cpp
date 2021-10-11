class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        map<int,int> mp;
        for(auto i : s) mp[i]++;
        int odd = 0;
        for(auto i : mp){
            if(i.second&1) odd++;
        }
        return (odd <= k);
    }
};