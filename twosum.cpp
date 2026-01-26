class Solution {
    public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> a;
    //     int lengthofnums = nums.size();
    //     for(int i=0;i<lengthofnums;i++){
    //         for(int j=i+1;j<lengthofnums;j++){
    //             if(nums[i]+nums[j]==target){
    //                 a.push_back(i);
    //                 a.push_back(j);

    //                 return a;
    //             }
    //         }
    //     }
    //     return a;
    // }

    vector<int> twoSum(vector<int>&nums, int target){
        vector<int> ans(2);
        unordered_map<int, int> mp;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int elem = nums[i];
            int required_num = target - elem;

            if(mp.find(required_num) != mp.end()){
                ans[0] = mp[required_num];
                ans[1] = i;
                return ans;
            }

            mp[elem] = i;
        }

        return ans;
    }
};