#include<algorithm>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int size=nums.size();
        // if(size==0)
        // return ;
        // k=k%size;
        // if(k==0)
        // return;
        //  reverse(nums.begin(),nums.end());
        //  reverse(nums.begin(),nums.begin()+k);
        //  reverse(nums.begin()+k,nums.end());
        vector<int>arr;
        int n=nums.size();

        k=k%n;
        for(int i=n-k;i<=n-1;i++){
            int value=nums[i];
            arr.push_back(value);
        }
        for(int i=n-1;i>=0;i--){
            if(i-k>=0){
                nums[i]=nums[i-k];
            }
        }
        for(int i=0;i<k;i++){
            nums[i]=arr[i];
        }
        
    }

};