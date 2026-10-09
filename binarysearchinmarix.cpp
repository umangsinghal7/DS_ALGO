// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         bool result = false ;
        
//         for(int i = 0 ; i< matrix[0].size(); i++){
//         int low = 0 ;
//         int high = matrix.size()-1;
//         while(high>=low){
//             int mid= low+(high-low)/2;
//                 if(matrix[mid][i]==target){
//                     return true;
//                 }
//                 else if(matrix[mid][i]>target){
//                     high= mid-1;

//                 }
//                 else{
//                     low=mid+1;
//                 }
//             }
//         }
//         return result;
//     }
// };

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Treat 2D matrix as a flat 1D array ranging from 0 to (rows * cols - 1)
        int low = 0;
        int high = rows * cols - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Map 1D mid position back to 2D matrix coordinates
            int midVal = matrix[mid / cols][mid % cols];
            
            if (midVal == target) {
                return true; 
            } else if (midVal < target) {
                low = mid + 1;   // Search the right half
            } else {
                high = mid - 1;  // Search the left half
            }
        }
        
        return false;
    }
};
