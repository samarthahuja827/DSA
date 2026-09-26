// flattening matrix without extra space [2d->1d] then bs
class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int r=mat.size();
        int c=mat[0].size();
        int low=0, high=(r*c)-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/c;
            int col=mid%c;
            if(mat[row][col]==target) return 1;
            else if(mat[row][col]<target){
                low=mid+1;
            }
            else high=mid-1;
        }
    return 0;
    }
};