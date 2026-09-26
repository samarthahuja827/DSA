class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // brute
        int n=matrix.size();
        auto temp=matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[j][n-1-i]=matrix[i][j]; //by observing
            }
        }
        matrix=temp;
    }
};