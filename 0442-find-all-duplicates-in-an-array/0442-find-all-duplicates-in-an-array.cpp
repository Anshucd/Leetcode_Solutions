class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(i+1<nums.size()){
              if(nums[i]^nums[i+1]){

              }
              else{
                ans.push_back(nums[i]);
              }
            }
            
          
            
        }
        return ans;
        
    }
};