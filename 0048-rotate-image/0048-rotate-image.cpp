class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Size of the matrix
        int n = matrix.size();

        //Step 1: Transpose the matrix
        for(int i = 0; i < n; i++){
            for(int j = i+ 1; j < n; j++){
                //Swap elements at (i,j) with (j,i)
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //Step 2: Reverse each row
        for(int i = 0; i < n ; i++){
            //Reverse the current row to complete clockwise rotation
            reverse(matrix[i].begin(), matrix[i].end());
        } 
    }
};