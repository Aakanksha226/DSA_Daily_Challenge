class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>ans = grid;
        for(int i = 0;i<n;i++){
            int k = rowShift[i];
            for(int j = 0;j<n;j++){
                int row = (j-k+n)%n;
                ans[i][row] = grid[i][j];
           
        }
        }
         grid = ans;
        for(int i = 0;i<n;i++){
                int k = colShift[i];
            for(int j = 0;j<n;j++){
             int col = (j-k+n)%n;
             ans[col][i] = grid[j][i];
                  
            }
        }
        return ans;
    }
};