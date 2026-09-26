// Binary Search on Columns
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int low=0;
        int high=r-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxRow=0;
            // finding maxRow in middle column
            for(int i=0;i<r;i++){
                if(mat[i][mid]>mat[maxRow][mid]){
                    maxRow=i;
                }
            }
            // no need to find top and bottom as it is max element in entire col
            int left=-1,right=-1;
            if(mid>0){
                left=mat[maxRow][mid-1];
            }
            if(mid<c-1){
                right=mat[maxRow][mid+1];
            }
            if(mat[maxRow][mid]>left && mat[maxRow][mid]>right) return {maxRow,mid};
            else if(mat[maxRow][mid]<left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};