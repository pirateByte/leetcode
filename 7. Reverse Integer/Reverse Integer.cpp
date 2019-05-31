class Solution {
public:
    int reverse(int x) {
        long int result=0;
        while(x!=0){
            result *= 10; 
            if(result > INT_MAX || result < INT_MIN) return 0;
            int mod = x%10;
            result += mod;
            x/=10;
        }
         return result;
        }
    
};