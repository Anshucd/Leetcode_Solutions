class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int ans =0; int fact=1;
        while(n!=0){
        int bit=n%2==0;
        ans=ans+fact*bit;
        fact*=2;
        n/=2;
        }
        return ans;
        

        
    }
};