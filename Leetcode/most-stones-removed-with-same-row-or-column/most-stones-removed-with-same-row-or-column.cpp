class Solution {
public:
    vector<int> par;
    
     int find(int i){
        if(par[i] == i)
        return i;
         
        return  par[i] = find(par[i]);
    }
    
     void uni(int i, int j){
         int u=find(i);
         int v=find(j);
         if(u==v) return;
         par[u]=v;
       
    }
    
    int removeStones(vector<vector<int>>& stones) {
        const int n = stones.size();
        par= vector<int>(n);
        for(int i=0;i<n;i++) par[i] = i;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
                    uni(i,j);
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++) 
            if(par[i] == i) cnt++;
        return n - cnt;
    }
        
};