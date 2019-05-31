class Solution {
public:
    bool check(char c1,char c2){
        if(c1=='(' && c2==')' ) return true;
        if(c1=='[' && c2==']' ) return true;
        if(c1=='{' && c2=='}' ) return true;
        return false;
}
    
    bool isValid(string s) {
        stack<char> inp;
        
        for(int i=0;i<s.length();i++){
            if(inp.empty()){
                inp.push(s[i]);
                
                continue;
            }
            if(check(inp.top(),s[i])){
                inp.pop();
            }else{
                inp.push(s[i]);
            }
            
        }
        return inp.empty();
    }
};