class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
      int r=matrix.size();
      int c=matrix[0].size();
      int low=matrix[0][0];
      int high=matrix[0][c-1];
      for(int i=0;i<r;i++){
        low=min(low,matrix[i][0]);
        high=max(high,matrix[i][c-1]);
      }
      int req=(r*c)/2 +1;
      while(low<=high){
        int mid=(low+high)/2;
        int count=0;
        for(int i=0;i<r;i++){
            int ub=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            count+=ub;
        }
        if(count<req) low=mid+1;
        else high=mid-1;
      }
      return low;
    }
};