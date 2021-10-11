class Solution {
public:
    int cache[50][50][50];
    bool isValid(vector<vector<int>>& grid, int n, int x1, int y1, int x2, int y2){
        return (x1 >= 0 && x1 < n && y1 >= 0 && y1 < n && x2 >= 0 && x2 < n && y2 >= 0 && y2 < n && grid[x1][y1] != -1 && grid[x2][y2] != -1);
    }

    int cherryCollected(vector<vector<int>>& grid, int n, int x1, int y1, int x2, int y2) {
        if(!isValid(grid, n,x1,y1,x2,y2)) return INT_MIN;
        if(cache[x1][y1][x2] != -1) return cache[x1][y1][x2];
        else if(x1 == n-1 && y1 == n-1) return grid[x1][y1];

        int cherries = 0;

        if(x1 == x2 && y1 == y2) cherries += grid[x1][y1];
        else cherries += grid[x1][y1] + grid[x2][y2];

        cherries += max({
                         cherryCollected(grid,n,x1+1,y1,x2+1,y2), 
                         cherryCollected(grid,n,x1,y1+1,x2+1,y2), 
                         cherryCollected(grid,n,x1+1,y1,x2,y2+1), 
                         cherryCollected(grid,n,x1,y1+1,x2,y2+1)
                         });

        return cache[x1][y1][x2] = cherries;
    }

    int cherryPickup(vector<vector<int>>& grid){
        memset(cache, -1, sizeof(cache));
        return max(cherryCollected(grid, grid.size(), 0, 0, 0, 0), 0);
    }
};