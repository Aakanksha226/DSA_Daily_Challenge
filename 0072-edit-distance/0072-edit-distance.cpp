// memoization from i = 0 to j = 0
class Solution {
public:
    int m,n;
    int t[501][501];
    int solve(string &s1,string &s2,int i ,int j){
        if(i==m){
            return n-j;//itne elements insert karo
        }
        else if(j==n){
            return m-i;//itne elements delete karo 
        }
        if(t[i][j]!= -1){
            return t[i][j];
        }
        if(s1[i]==s2[j]){
            return t[i][j] = solve(s1,s2,i+1,j+1);
        }
        else {
            int insertc = 1 + solve(s1,s2,i,j+1);
            int deletec = 1 + solve(s1,s2,i+1,j);
            int replacec = 1 + solve(s1,s2,i+1,j+1);
            return t[i][j] = min({insertc,deletec,replacec});
        }
        return -1;

    }
    int minDistance(string word1, string word2) {
         m = word1.length();
         n = word2.length();
        memset(t,-1,sizeof(t));
        return solve(word1,word2,0,0);
        
    }
};


// class Solution {
// public:
//     int minDistance(string word1, string word2) {
        
//     }
// };
// class Solution {
// public:
//     int minDistance(string word1, string word2) {
        
//     }
// };