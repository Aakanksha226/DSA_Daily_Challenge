class Solution {
public:
       int sumdigit(int x){
           int sum = 0;
           while(x>0){
            sum = sum + x%10;
            x = x/10;
           }
           return sum;
       }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(i == sumdigit(nums[i])){
                return i;
                break;
            }  
        }
        return -1;        
    }
};