class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i = 0;i<n;i++){
            int k = rowShift[i];
           rotate(grid[i].begin(),grid[i].begin()+k,grid[i].end());
        }
         vector<vector<int>>ans = grid;
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