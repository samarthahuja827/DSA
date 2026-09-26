class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int r=mat.size();
        int c=mat[0].size();

        for(int i=0;i<r;i++){
            if(mat[i][0]<=target && target<=mat[i][c]){ // optimized condition
                int low=0,high=c;
                while(low<=high){
                    int mid=(low+high)/2;
                    if(mat[i][mid]==target) return 1;

                    else if(mat[i][mid]<target){
                        low=mid+1;
                    }
                    else high=mid-1;
                }
            }
        }
        return 0;
    }
};
// n + logm