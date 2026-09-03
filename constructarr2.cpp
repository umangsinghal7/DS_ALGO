// class Solution {
// public:
//     bool uniformArray(vector<int>& nums1) {
//         bool flag = true;
//         sort(nums1.begin(),nums1.end());
//         for(int i = 0 ; i <nums1.size() ; i++ ){
//             if(nums1[i]%2==0){

//             }
//         }      
        
//         if(nums1[0]%2==0){
//             flag =false;
//         }
//     }
// };
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_odd = INT_MAX;
        
        // Step 1: Find the smallest odd number
        for (int x : nums1) {
            if (x % 2 != 0) {
                min_odd = min(min_odd, x);
            }
        }
        
        // If no odd numbers exist, the array is already uniformly even
        if (min_odd == INT_MAX) {
            return true;
        }
        
        // Step 2: Ensure all even numbers are larger than the smallest odd number
        for (int x : nums1) {
            if (x % 2 == 0 && x < min_odd) {
                return false;
            }
        }
        
        return true;
    }
};
