class Solution {
public:
    int count = 0;
    void dfs(vector<vector<int>>& grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]==0){
            count++;
            return;
        }
        if(grid[i][j] == -1) return;
        grid[i][j] = -1;
        
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        count = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if(grid[i][j] == 1){
                    dfs(grid,i,j);
                    break; // Remove this break if there exist more than one island                
                }
            }
        }
        return count;
    }
};