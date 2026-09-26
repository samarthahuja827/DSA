class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int x:arr){
            if(x<=k){
                k++;
            }
            else break;
        }
        return k;
    }
};
