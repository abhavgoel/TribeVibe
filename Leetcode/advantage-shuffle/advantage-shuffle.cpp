class Solution {
public:
    vector<int> advantageCount(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<int> ans(n);
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i<n;i++) pq.push({b[i], i});
        
        int low = 0, high = n-1;
        sort(a.begin(), a.end());
        while(!pq.empty()){
            auto top = pq.top(); pq.pop();
            int mxB = top.first;
            int idx = top.second;
            if(a[high] > mxB){
                ans[idx] = a[high];
                high--;
            } else {
                ans[idx] = a[low];
                low++;
            }
        }
        return ans;
    }
};