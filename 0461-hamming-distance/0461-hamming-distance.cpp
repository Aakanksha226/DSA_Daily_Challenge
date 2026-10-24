class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x^y;
        // for binary to decimal ke liye 2 se multiply and divide okk 
        // hamming code ke liye after xor find the no. of 1s in the result
    
        int i =0;
        while(ans!=0){
            int rem = ans%2;
           if(rem ==1)
            i++;
            ans /= 2;
        }
        return i;
        
    }
};