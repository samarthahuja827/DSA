class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        int mx=arr.back();
        for(int i=1;i<=mx;i++){
            int flag=0;
            for(int x: arr){
                if(x==i){
                    flag=1;
                }
            }
            if(flag==0) v.push_back(i);
        }
        return v[k-1];
    }
};


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num=1;
        int found=0;
        while(k>0){
            for(int x: arr){
                if(x==num){
                    found=1;
                    break;
                }
            }
            if(!found) k--;
            if(k==0) return num;
            num++;
        }
        return -1;
    }
};
