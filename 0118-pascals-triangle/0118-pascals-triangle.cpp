class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //Result vector to hold all rows
        vector<vector<int>> tri;

        //Loop foe each row
        for(int i = 0; i < numRows; i++){
            //Initialize a row of size i+1 by 1
            vector<int> row(i+1, 1);

            //Fill all middle elements(1 to i-1)
            for(int j = 1; j < i; j++){
                //Each row is sum of two elements just above it
                row[j] = tri[i-1][j-1] + tri[i-1][j];
            }       
            //Add curr row to the triangle
            tri.push_back(row);
        }
        return tri;
    }
};