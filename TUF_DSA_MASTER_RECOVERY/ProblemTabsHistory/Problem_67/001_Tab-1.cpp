class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> v;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            v.push_back(matrix[i][j]);
        }
      }
      sort(v.begin(),v.end());
      if(v.size()%2==1) return v[v.size()/2];
      else return (v[v.size()/2]+v[v.size()/2-1])/2;
    }
};