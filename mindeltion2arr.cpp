// class Solution {
// public:
//     int minOperations(vector<int>& nums, vector<int>& numsDivide) {
//         sort(nums.begin(),nums.end());
//         int result;
        
//         for(int i  = 0 ; i < nums.size() ; i++){
//             bool flag = true;
//             for(int j = 0 ; j < numsDivide.size() ; j++){
//                 if(numsDivide[j]%nums[i]!=0){
//                     flag = false;
//                     break;
//                 }
                
                
//             }
//             if(flag==true){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };




class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        
        // Find GCD of all elements in numsDivide
        int gcd = numsDivide[0];

        for (int i = 1; i < numsDivide.size(); i++) {
            gcd = __gcd(gcd, numsDivide[i]);
        }

        // Sort nums so we get the smallest valid divisor
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (gcd % nums[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};

