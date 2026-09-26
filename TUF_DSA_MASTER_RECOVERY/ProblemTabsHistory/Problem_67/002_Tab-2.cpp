// bonus soln (not reqsuired )only works if a small range is fixed
class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
      int r=matrix.size();
        int c=matrix[0].size();
        int mx=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mx=max(mx,matrix[i][j]);
            }
        }
        vector<int> freq(mx+1,0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                freq[matrix[i][j]]++;
            }
        }
        int req=(r*c)/2 +1; // req is middle element like for 9 elem 5th element is req
        for(int i=0;i<=mx;i++){
            req=req-freq[i]; // if diff=0 we r at that position
            if(req<=0) return i;
        }
        return 0;
    }
};