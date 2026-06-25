class Solution {
public:
    int subtractProductAndSum(int n) {
        int Product=1; int sum =0;
        while(n!=0){
            int num=n%10;
            n/=10;
            Product*=num;
            sum+=num;
        }
        return Product-sum;
        
    }
};