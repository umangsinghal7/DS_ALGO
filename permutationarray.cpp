class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int index) {

        // All positions are filled
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Try every number at current position
        for (int i = index; i < nums.size(); i++) {

            // Put nums[i] at position index
            swap(nums[index], nums[i]);

            // Fill the next position
            solve(nums, index + 1);

            // Undo the swap
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};
