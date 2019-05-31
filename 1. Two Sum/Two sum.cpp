class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ht;
        vector<int> result;
        
        for(int i=0;i<nums.size();i++){
            ht[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            int res = target - nums[i];
            if(ht.find(res)!=ht.end() && ht[res]!=i){
                result.push_back(i);
                result.push_back(ht[res]);
                return result;
            }
        }
        
     return result;   
    }
    
};