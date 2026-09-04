class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int u = 0;
        
        while (u < nums.size()) {
            // 1. Reset Max and Min for each index candidate 'u'
            int Max = INT_MIN;
            int Min = INT_MAX;

            // 2. Include index u in prefix (j <= u)
            for (int j = 0; j <= u; j++) {
                Max = max(Max, nums[j]);
            }

            // 3. Fix bounds (i < nums.size() instead of <=)
            for (int i = u; i < nums.size(); i++) {
                Min = min(Min, nums[i]);
            }

            if (Max - Min <= k) {
                return u;
            }

            u++;
        }

        return -1;
    }
};
