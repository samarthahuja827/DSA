class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // brute force (another temp matrix used)
        int m=matrix.size(); // no of rows
        int n=matrix[0].size(); // no of columns

        vector<vector<int>> temp= matrix; // OR auto temp= matrix; used for creating a copy of matrix
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        temp[i][k]=0; //marking ith row as 0
                    }
                    for(int k=0;k<m;k++){
                        temp[k][j]=0; //marking jth col as 0
                    }
                }
            }
        }
        matrix=temp;
    }
};