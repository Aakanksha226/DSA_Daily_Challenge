class Solution {
public:
    int productdig(int n){
        int product = 1;
        while(n>0){
            product = product*(n%10);
            n = n/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
            int ans;
             for(int i = n;i<=100;i++){
              int a = productdig(i);
            
              if(a%t==0){
                ans =  i;
                break;
              }
           }
        return ans;
    }
};