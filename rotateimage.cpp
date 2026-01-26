class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // reverse the row//
        int n = matrix.size();
        for(int row = 0 ; row < n ; row++){
            int x=0,y=n-1;
            while(x<y){
                swap(matrix[x][row],matrix[y][row]);
                x++;
                y--;
            }
        }
        //transpose matrix//
        
        for( int i = 0 ; i < n ; i++){
            for ( int j=0; j < n ; j++){
                if(i>j)
                {
                swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
    }
    
};