class Solution {
public:
    bool checkDivisibility(int n) {
        int prod = 1;
        int sum = 0 ;
        int original = n ;
        while(n>0){
            int digit = n%10;
            prod = prod*digit;
            sum= sum+digit;
            n = n/10;
        }
        if(original%(sum+prod)!=0){
        return false;
        }
        return true;
    }
};
