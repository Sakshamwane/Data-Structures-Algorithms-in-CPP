class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Number of rows
        int m = matrix.size();

        //Number of cols
        int n = matrix[0].size();

        //Array to track rows
        vector<int> rows(m,0);

        //Array to track cols
        vector<int> cols(n, 0);
        
        //First pass: mark all rows or cols with 0
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        //Second pass: change all marked rows & cols to 0
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(rows[i] == 1 || cols[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};