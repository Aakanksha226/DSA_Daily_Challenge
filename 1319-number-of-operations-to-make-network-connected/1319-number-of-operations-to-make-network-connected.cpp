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
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }
        parent.resize(n);
        rank.resize(n,0);
        for(int i = 0;i<n;i++){
            parent[i] = i;
        }
          int comp = n;
        for(auto &edg: connections){
            if(find(edg[0]) != find(edg[1])){
            unity(edg[0],edg[1]);
            comp--;
        }
        }
        return comp - 1;
    }
};