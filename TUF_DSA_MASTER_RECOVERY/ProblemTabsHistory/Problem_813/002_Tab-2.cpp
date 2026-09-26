class Solution {
public:
    int pascalTriangleI(int r, int c) {
        vector<vector<int>> ans(r);
        for(int i=0;i<r;i++){
            ans[i]=vector<int>(i+1,1); // vector size =i+1 and all elements =1
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
        }
        return ans[r-1][c-1];
    }
};