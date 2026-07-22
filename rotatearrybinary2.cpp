class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool result = false;
        for(int i = 0 ; i < nums.size() ; i++){
            if(target==nums[i]){
                result= true;
            }
        }
        return result;
    }
};