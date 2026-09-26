class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    // u can use lower bound/ first occ/ upper bound+1
    int r=mat.size();
    int c=mat[0].size();
    int index=-1;
    int maxCount=0;

    for(int i=0;i<r;i++){
        int count=0;
        int lb=lower_bound(mat[i].begin(),mat[i].end(),1)-mat[i].begin(); //index
        count=c-lb;
        if(count>maxCount){
            maxCount=count;
            index=i;
        }
    }
    return index;
  }
};