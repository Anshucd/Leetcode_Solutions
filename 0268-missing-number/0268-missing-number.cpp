#include<algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int s=0;
//         int e=n-1;
//         int ans=n;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(nums[mid]==mid){
//                 s=mid+1;
//             }
//             else if (nums[mid]>mid){
//                 ans=mid;
//                 e=mid-1;
//             }
            
            
//         }
                        int i=0;
                 for(i;i<nums.size();i++){
                    if(nums[i]!=i){
                        return i;
                    }
                    
                 }
       return i ;
        
    };
};