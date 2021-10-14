class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>m;
        int n = s.length();
        for(int i=0 ; i<n ; i++){
            m[s[i]] = i ;
        }
        //for(auto i: m) cout<<i.second<<" ";
        vector<int>ans;
        int end = 0 ;
        int start = 0 ;
        for(int i=0 ; i<n ; i++){
            if(i>end){
                ans.push_back(end - start + 1);
                start = i ;
            }
            end = max(end , m[s[i]]);
        }
        ans.push_back(end - start + 1);
        return ans ;
    }
};