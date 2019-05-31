class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        int prev =INT_MAX,curr=0;
      for(int i=0;i<s.length();i++){
          switch(s[i]){
              case 'I': curr=1;
                  break;
              case 'V': curr=5;
                  break;
              case 'X':curr=10;
                  break;
              case 'L': curr=50;
                  break;
              case 'C': curr=100;
                  break;
              case 'D': curr=500;
                  break;
              case 'M': curr=1000;
          }
          if(curr>prev){
              result+=curr-2*prev;
              
          }else{
              result+=curr;
          }
          prev=curr;
          
      }
        return result;
    }
};