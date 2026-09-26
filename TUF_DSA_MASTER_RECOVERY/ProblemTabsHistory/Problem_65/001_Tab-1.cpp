class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        vector<int> v;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int left=-1,right=-1,top=-1,bottom=-1;
                if(i>0) top=mat[i-1][j];
                if(i<r-1) bottom=mat[i+1][j];
                if(j<c-1) right=mat[i][j+1];
                if(j>0) left=mat[i][j-1];

                if(mat[i][j]>left && mat[i][j]>right && mat[i][j]>top && mat[i][j]>bottom){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};