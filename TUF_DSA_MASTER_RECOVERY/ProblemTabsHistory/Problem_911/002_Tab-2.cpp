class Solution {
public:
    void markRow(vector<vector<int>>& matrix, int i, int n){
        for(int j=0;j<n;j++){ // mark single row containing multiple cols
            if(matrix[i][j]!=0) matrix[i][j]=-1;
        }
    }
    void markCol(vector<vector<int>>& matrix, int j, int m){
        for(int i=0;i<m;i++){ //mark single col containing multiple rows
            if(matrix[i][j]!=0) matrix[i][j]=-1;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        // brute force such as only 0 and 1 present (as long as -1 not present)
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    markRow(matrix,i,n);
                    markCol(matrix,j,m);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==-1) matrix[i][j]=0;     
            }
        }
    }
};