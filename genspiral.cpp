class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));

        int sr = 0, sc = 0;
        int er = n - 1, ec = n - 1;
        int num = 1;

        while (sr <= er && sc <= ec) {

            // Left to Right
            for (int col = sc; col <= ec; col++) {
                matrix[sr][col] = num++;
            }
            sr++;

            // Top to Bottom
            for (int row = sr; row <= er; row++) {
                matrix[row][ec] = num++;
            }
            ec--;

            // Right to Left
            if (sr <= er) {
                for (int col = ec; col >= sc; col--) {
                    matrix[er][col] = num++;
                }
                er--;
            }

            // Bottom to Top
            if (sc <= ec) {
                for (int row = er; row >= sr; row--) {
                    matrix[row][sc] = num++;
                }
                sc++;
            }
        }

        return matrix;
    }
};