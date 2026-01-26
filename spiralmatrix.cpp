class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size(); //row size
        int n = matrix[0].size(); //column size
        int sr = 0 ,sc = 0 ; //row start,end
        int er = m-1, ec = n-1 ; //col start,end
        while(sr<=er && sc<=ec){
            for(int col = sc ; col <= ec ; col++){
                result.push_back(matrix[sr][col]);
            }
            sr++;


            for(int row = sr ; row <= er ; row++){
                result.push_back(matrix[row][ec]);
            }
            ec--;


            if(sr<=er){
                for(int col = ec ; col >= sc ; col--){
                result.push_back(matrix[er][col]);
                }
                er--;
            }


            if(sc<=ec){
                for(int row = er ; row >= sr ; row--){
                result.push_back(matrix[row][sc]);
                }
                sc++;
            }
        }
        return result;
    }
};