class Solution {
public:
 // ye tha simplle recusion isly tle aaya ab memoize xode likho
    // long long solve(int i,vector<int>& nums,int n ,bool flag){
    //     if(i>=n){
    //         return 0;
    //     }
    //     long long skip = solve(i+1,nums,n,flag);
    //      int val = nums[i];
    //       if(flag == 0){
    //         val = -val;
    //      }
    //      long long take = solve(i+1,nums,n,!flag) + val;
    //      return max(skip,take);
    // }
     int n;
     long long t[1000001][2];
     long long solve(int i,vector<int>& nums,bool flag){
        if(i>=n){
            return 0;
        }
        if(t[i][flag]!=-1)
        return t[i][flag];
        long long skip = solve(i+1,nums,flag);
        long long val = nums[i];
        if(flag == 0){
            val = -val;
        }
        long long take = solve(i+1,nums,!flag) + val;
        return t[i][flag] =  max(take,skip);

     }
    long long maxAlternatingSum(vector<int>& nums) {
      n = nums.size();
      memset(t,-1,sizeof(t));
      return solve(0,nums,true);//0 even idx

        
    }





};