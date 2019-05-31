class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
      long int num=0;
        int z=x;
        while(z!=0){
            num*=10;
            if(num>INT_MAX) return false;
            num+=z%10;
            z/=10;
        }
        if(num==x) return true;
        else return false;
    }
};