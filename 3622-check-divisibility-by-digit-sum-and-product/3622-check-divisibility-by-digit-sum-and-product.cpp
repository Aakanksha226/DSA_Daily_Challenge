class Solution {
public:
    int sumdigpro(int n){
        int sum = 0;
        int product = 1;
        while(n>0){
            sum = sum + n%10;
            product = product*(n%10);
            n = n/10;
        }
        return sum + product;
    }
    bool checkDivisibility(int n) {
        int a = sumdigpro(n);
        return n%a==0;
        
    }
};