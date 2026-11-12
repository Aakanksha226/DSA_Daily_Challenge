//brute force
class Solution {
public:
    bool check(string &s,int i ,int j){
        if(i>j){
            return true;
        }
        if(s[i]==s[j]){
            return check(s,i+1,j-1);
        }
        return false;
    }
    int countSubstrings(string s) {  
        int n = s.length();
        int count = 0;
        for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
        if(check(s,i,j)){
            count++;
        }
        }
        }
    return count;
    }
};
 
 // memoization 
//  class Solution {
// public:
//     int t[1001][1001];
//     bool check(string &s,int i ,int j){
//         if(i>j){
//             return true;
//         }
//         if(t[i][j] != -1){
//             return t[i][j];
//         }
//         if(s[i]==s[j]){
//             return t[i][j] = check(s,i+1,j-1);
//         }
//         return t[i][j] =  false;
//     }
//     int countSubstrings(string s) {  
//         int n = s.length();
//         int count = 0;
//         memset(t,-1,sizeof(t));
//         // t[i][j] = -1means not calciulated yet
//         // t[i][j] = 1// palindrome
//         // t[i][j] = 0;not a palindrome
//         for(int i = 0;i<n;i++){
//         for(int j = i;j<n;j++){
//         if(check(s,i,j)){
//             count++;
//         }
//         }
//         }
//     return count;
//     }
// };

//optimal approach that is bottom up

// class Solution {
// public:
//     int countSubstrings(string s) {  
        
//     }
// };