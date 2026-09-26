class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int r=mat.size();
        int c=mat[0].size();

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==target) return 1;
            }
        }
        return 0;
    }
};

class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int r=mat.size();
        int c=mat[0].size();

        for(int i=0;i<r;i++){
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
        return 0;
    }
};
// nlogm