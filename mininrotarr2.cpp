class Solution {
public:
    int findMin(vector<int>& nums) {
        for(int i = 0 ;  i < nums.size() ; i++){
            for(int j = 0 ; j < nums.size()-1-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        return nums[0];
    //     int low = 0 ;
    //     int high = nums.size()-1;
    //     while(low<=high){
    //         int mid = low-(high-low)/2;
    //         if(mid){
    //             min=mid;
    //             mid=
    //         }
    //     }
    }
};