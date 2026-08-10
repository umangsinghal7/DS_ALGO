class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int maxSum = 0;
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            maxSum = max(maxSum, nums[i] + nums[j]);
            i++;
            j--;
        }

        return maxSum;
    }
};
