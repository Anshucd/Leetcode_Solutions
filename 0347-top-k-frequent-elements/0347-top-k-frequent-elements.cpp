class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>>copy;
        vector<int> ans;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            copy.push_back(x);
        }

        sort(copy.begin(),copy.end(),[]( auto a,auto b){return a.second>b.second;});
        int count=0;
        
        

        for(auto x:copy){

            if(count<k){
            count++;
            ans.push_back(x.first);
            }
            if(count==k){
                break;
            }
         }
         return ans;
        
    }
};