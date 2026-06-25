class Solution {
public:
    int findComplement(int num) {
        
        if(num<1) return 1;
        int ans =0; int fact=1;
        while(num!=0){
        int bit=num%2==0;
        ans=ans+fact*bit;
        if(fact<INT_MAX/2){
        fact*=2;
        }
        num/=2;
        }
        return ans;
        
    }
};