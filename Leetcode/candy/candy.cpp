class Solution {
public:
    int candy(vector<int>& a) {
        int n = a.size(),sum=0;
        vector<int> all(n,1);
        for(int i=1;i<n;i++){
            if(a[i] > a[i-1]) all[i] = all[i-1] + 1;
        }
         for(int i=n-1;i>0;i--){
            if(a[i-1] > a[i]) all[i-1] = max(1 + all[i], all[i-1]);
        }
        for(auto i:all) sum+=i;
        return sum;
    }
};