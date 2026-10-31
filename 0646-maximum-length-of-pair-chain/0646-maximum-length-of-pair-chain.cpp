class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int max_chain = 1;
        int n = pairs.size();
        sort(begin(pairs),end(pairs));
        vector<int>t(n,1);
        for(int i = 0; i<n; i++){
            for(int j = 0;j<i ; j++){
                if(pairs[j][1]<pairs[i][0]){
                    t[i] = max(t[i],t[j] + 1);
                   max_chain = max(max_chain,t[i]);
                }
            }
        
        }
        return max_chain;    
        
    }
};