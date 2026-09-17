class Solution {
public:
        vector<int>parent;
        vector<int>rank;
      int find(int i ){
            if(i== parent[i]){
                return i ;
            }
             parent[i] = find(parent[i]);
            return  parent[i];

        }
        void  unity(int x,int y){
        int p_x = find(x);
        int p_y = find(y);
        if(p_x==p_y){
            return;
        }
        if(rank[p_x]>rank[p_y]){
            parent[p_y] = p_x;
        }
         else if(rank[p_y]>rank[p_x]){
            parent[p_x] = p_y;
        }
        else {
            parent[p_x] = p_y;
            rank[p_y]++;
        }
    }
    int removeStones(vector<vector<int>>& stones) {
         int n = stones.size();
         parent.resize(n);
         rank.resize(n,0);
         for(int i = 0;i<n;i++){
            parent[i] = i;
         }
         for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] ||stones[i][1]==stones[j][1])
                unity(i,j);
            }
         }
         int grp = 0;
         for(int i = 0;i<n;i++){
            if(find(i)==i){
                grp++;
            }
         }
         return n-grp;
        
    }

};