class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> ans(nums);
        for(int i = 0 ; i <n ; i++){
            nums[i] = ans[(i-k+n)%n];
        }
        
    }
    
};
