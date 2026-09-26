class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int r=mat.size();
    int c=mat[0].size();
    int index=-1;
    int maxCount=0;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(mat[i][j]==1) count++;
        }
        if(count>maxCount){
            maxCount=count;
            index=i;
        }
    }
    return index;
  }
};