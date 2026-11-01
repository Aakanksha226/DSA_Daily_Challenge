class Solution {
public:
   int n;
   bool ispred(string &prev,string &curr){
       int m = prev.length();
       int N = curr.length();
       if(m>=N||N-m!=1){
        return false;
       }
       int i = 0;
       int j = 0;
       while(i<m&&j<N){
        if(prev[i]==curr[j]){
            i++;
        }
        j++;
       }
       return i==m;
      
   }
   static bool myfunction(string &a,string &b){
        return a.length()<b.length();
    }
    int longestStrChain(vector<string>& words) {
     n = words.size();
    sort(words.begin(),words.end(),myfunction);
    int max_chain = 1;
    vector<int>t(n,1);
    for(int i =0;i<n;i++){
        for(int j=0;j<i;j++){
            if(ispred(words[j],words[i])){
                t[i] = max(t[i] , t[j] + 1);
                max_chain = max(max_chain ,t[i]);
            }
        }
    }
    return max_chain;    
    }
};