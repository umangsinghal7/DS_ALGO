class Solution {
public:
    bool validDigit(int n, int x) {
        bool flag= false;
        while(n>9){
            int digit=n%10;
            if(digit==x){
                flag= true;
            }
            n/=10;
        }
        if(n==x){
            flag=false;
        }
        return flag;
    }
};