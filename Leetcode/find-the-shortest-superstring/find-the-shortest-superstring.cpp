class Solution {
public:
    string shortestSuperstring(vector<string>& A) {
        int n=A.size();
        vector<vector<int> > pre(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                pre[i][j]=A[i].size()+A[j].size();
                for(int len=min(A[i].size(), A[j].size()); len>=1; len--){
                    if(A[j].substr(0, len)==A[i].substr(A[i].size()-len, len)){
                        pre[i][j]=A[i].size()-len+A[j].size();
                        break;
                    }
                }
            }
        }
        vector<vector<int> > dp(n, vector<int>(1<<n, 200000)), parent(n, vector<int>(1<<n, -1)), parent_mask(n, vector<int>(1<<n));
        for(int i=0; i<n; i++)
            dp[i][1<<i]=A[i].size();
        for(int mask=1; mask<(1<<n); mask++){
            for(int i=0; i<n; i++){
                if(mask&(1<<i)){
                    for(int j=0; j<n; j++){
                        if(!(mask&(1<<j))){
                            if(pre[i][j]+dp[i][mask]-A[i].size()<dp[j][mask|(1<<j)]){
                                dp[j][mask|(1<<j)]=pre[i][j]+dp[i][mask]-A[i].size();
                                parent[j][mask|(1<<j)]=i;
                                parent_mask[j][mask|(1<<j)]=mask;
                            }
                        }
                    }
                }
            }
        }
        int mi=200000, idx, mask=(1<<n)-1;
        for(int i=0; i<n; i++){
            if(mi>dp[i][mask]){
                mi=dp[i][mask];
                idx=i;
            }
        }
        vector<int> v;
        while(idx!=-1){
            v.push_back(idx);
            int tmp=idx;
            idx=parent[idx][mask];
            mask=parent_mask[tmp][mask];
        }
        reverse(v.begin(), v.end());
        string ans=A[v[0]];
        for(int i=1; i<v.size(); i++){
            for(int len=min(ans.size(), A[v[i]].size()); len>=0; len--){
                if(A[v[i]].substr(0, len)==ans.substr(ans.size()-len, len)){
                    ans+=A[v[i]].substr(len);
                    break;
                }
            }
        }
        return ans;
    }
};