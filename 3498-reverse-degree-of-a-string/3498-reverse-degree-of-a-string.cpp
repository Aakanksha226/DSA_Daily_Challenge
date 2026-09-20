class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        //ascii val of z is 122 and a is 97
        for(int i = 0;i<s.length();i++){
           int mul = 'z' - s[i] + 1;
              sum = sum + mul*(i+1);
        }
        return sum;
   
    }
};