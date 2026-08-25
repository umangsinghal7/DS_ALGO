class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = k;

        while(true) {
            bool found = false;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == ans) {
                    found = true;
                    break;
                }
            }

            if(!found)
                return ans;

            ans += k;
        }
    }
};
