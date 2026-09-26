class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int r=mat.size();
        int c=mat[0].size();
        int tarRow=-1;

// finding row where target lies
        int low=0,high=r-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(mat[mid][0]<=target){
                low=mid+1;
            }else{
               high=mid-1; 
            }
        }
        tarRow=high;
        if(tarRow==-1) return 0;
// finding column where target lies
        int l=0,h=c-1;
        while(l<=h){
            int m=(l+h)/2;
            if(mat[tarRow][m]==target) return 1;
            else if(mat[tarRow][m]<target){
                l=m+1;
            }
            else h=m-1;
        }
    return 0;
    }
};
// logr +logc