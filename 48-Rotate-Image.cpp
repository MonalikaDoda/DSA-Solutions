class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        //Transpose the part pnly before the diagonal of the mtarix to avoid duplicates 
        for(int i = 0; i<row; i++){
            for(int j = i+1; j<col; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //Reverse each row
        for(int i = 0; i<row; i++){
                reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};