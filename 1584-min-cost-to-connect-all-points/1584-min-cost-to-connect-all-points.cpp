class Solution {
public:
   typedef pair<int,int> p;
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<vector<pair<int,int>>>adj(n);
        for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==j){
                continue;
            }
        int distance = abs(points[i][0]-points[j][0]) + abs(points[i][1]-points[j][1]);
        adj[i].push_back({j,distance});
            adj[j].push_back({i,distance});

            }
        }
           vector<int>vis(n,0);
           int sum = 0;
           priority_queue<p,vector<p>,greater<p>>pq;
           // wt,node
           pq.push({0,0});
            
           while(!pq.empty()){
              
            int dis =  pq.top().first;
            int node = pq.top().second;
              pq.pop();
              if(vis[node]){
                continue;
              }
            if(!vis[node]){
                vis[node] = 1;
                sum = sum + dis;
            }
            for(auto iter: adj[node]){
            if(!vis[iter.first]){
                pq.push({iter.second,iter.first});
            }
        }
             
           }
             return sum;
        
    }
};