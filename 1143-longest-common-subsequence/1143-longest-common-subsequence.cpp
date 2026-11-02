class Solution {
public:
    int n ,m;
    int t[1001][1001];
    int solve(string &s1,string &s2,int i ,int j){
        if(i>=n||j>=m){
            return 0;
        }
        if(t[i][j] != -1){
            return t[i][j];
        }
        if(s1[i]==s2[j]){
           return  t[i][j] = 1 + solve(s1,s2,i+1,j+1);
        }
        int a = solve(s1,s2,i,j+1);
        int b = solve(s1,s2,i+1,j);
        return t[i][j] = max(a,b);

    }


    int longestCommonSubsequence(string text1, string text2) {
        n = text1.length();
        m = text2.length();
        memset(t,-1,sizeof(t));
        return solve(text1,text2,0,0);
        
    }
};