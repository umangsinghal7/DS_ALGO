class Solution {
public:
    bool prime(int x){
        if(x<2) return false;
        for(int i = 2 ; i*i <= x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    };
    int sumOfPrimesInRange(int n) {
        int revdigit=0;
        int orignal=n;
        int sum=0;
        while(n>0){
            revdigit = revdigit*10 +(n%10);
            n=n/10;
        }

        int inital = min(revdigit,orignal);
        int final= max(revdigit,orignal);
        for(int x = inital ; x <= final ; x++){
            if(prime(x)){
                sum+=x;
            }
        }
        
        return sum;
    }
};
