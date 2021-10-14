class Solution {
public:
        vector<int> par;
    
     int find(int i){
        if(par[i] == -1)
        return i;
         
        return  par[i] = find(par[i]);
    }
    
     void uni(int i, int j){
         int u=find(i);
         int v=find(j);
         if(u==v) return;
         par[u]=v;
       
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n > connections.size() + 1) return -1;
        par= vector<int>(n,-1);
        for(auto i : connections){
            uni(i[0],i[1]);
        }
        int cnt = 0;
        for(int i=0;i<n;i++) 
            if(par[i] == -1) cnt++;
        return cnt - 1;
    }
};