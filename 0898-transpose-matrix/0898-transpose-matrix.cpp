class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix ){
        int m = matrix.size(); // Number of rows
        int n = matrix[0].size(); // Number of columns
    
        vector<vector<int>> transposed(n, vector<int>(m, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                transposed[j][i] = matrix[i][j];
            }
        }

        return transposed;
    }
};