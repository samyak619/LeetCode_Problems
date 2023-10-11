class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> transpose(n, vector<int>(m, 0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                transpose[j][i] = matrix[i][j];
            }
        }
        for(int i = 0; i < m; i++){
            int temp = 0;
            for(int j = 0, temp = n - 1; j < n; j++){
                matrix[i][j] = transpose[i][temp--];
            }
        }
    }
};