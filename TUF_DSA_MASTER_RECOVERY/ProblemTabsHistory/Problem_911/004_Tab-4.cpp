class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // optimal approach
        int m=matrix.size();
        int n=matrix[0].size();
        bool firstRowImpacted=false;
        bool firstColImpacted=false;

        // Check if first row is Impacted
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                firstRowImpacted=true;
                break;
            }
        }
        // Check if first col is Impacted
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                firstColImpacted=true;
                break;
            }
        }

        // check for inner matrix containing 0, if it contains, mark that first row and first col cell as 0
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0; //row marker at first row
                    matrix[i][0]=0; //col marker at first col
                }
            }
        }

        // Again traverse the inner matrix if first row OR first col has 0 marked correspondingly make the element 0
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        // If first row originally had a zero, make the whole first row zero.
        if(firstRowImpacted){
            for(int j=0;j<n;j++) matrix[0][j]=0;
        }

        // If first column originally had a zero, make the whole first column zero.
        if(firstColImpacted){
            for(int i=0;i<m;i++) matrix[i][0]=0;
        }
    }
};