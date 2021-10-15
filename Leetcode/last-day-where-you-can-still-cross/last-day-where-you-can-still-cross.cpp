class Solution {
public:
    bool isValidPoint(int x, int y, int n, int m) {
        return x >= 0 && x < n && y >= 0 && y < m;
    }
    
    bool canCross(int row, int col, vector<vector<int>>& cells, int day) {
        vector<vector<int>> grid(row, vector<int>(col, 0));
        
        for (int i = 0; i <= day; i++) grid[cells[i][0]-1][cells[i][1]-1] = 1;
        
        queue<pair<int, int>> q;
        
        for (int i = 0; i < col; i++) {
            if (!grid[0][i]) {
                q.push({0, i});
                grid[0][i] = 1;
            }
        }
        
        while (!q.empty()) {
            pair<int, int> curr = q.front();
            q.pop();
            
            if (curr.first == row - 1) return true;
            
            for (int i = 0; i < 4; i++) {
                int x = curr.first + x_points[i];
                int y = curr.second + y_points[i];
                
                if (isValidPoint(x, y, row, col) && !grid[x][y]) {
                    grid[x][y] = 1;
                    q.push({x, y});
                }
            }
        }
        return false;
        
    }
    
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int lo = 1, hi = cells.size()-1, mid, res = 0;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            
            if (canCross(row, col, cells, mid))
                lo = mid + 1;
                
            else
                hi = mid - 1;
        }
        
        return lo;
    }
    
private:
    vector<int> x_points = {1, 0, -1, 0};
    vector<int> y_points = {0, 1, 0, -1};
};