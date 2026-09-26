class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int r=mat.size();
    int c=mat[0].size();
    int index=-1;
    int maxCount=0;
    for(int i=0;i<r;i++){ //go in each row to perform bs

        int low=0,high=c;
        while(low<=high){
            int mid=(low+high)/2;
            if(mat[i][mid]==1){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        int count=c-low;
        if(count>maxCount){
            maxCount=count;
            index=i;
        }
    }
    return index;
  }
};