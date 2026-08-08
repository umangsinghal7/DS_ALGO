class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int x= nums.size();
        if(x==1) return nums[0];
        
        while(x>1){
        for(int i = 0 ; i < x-1 ; i++){
            nums[i]=(nums[i]+nums[i+1])%10;
            
        }
        x--;
        }
        return nums[0];
    }
};