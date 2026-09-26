class Solution {
public:
    int paint(int A, int B, vector<int>& C) {
        int mod=10000003;
        int low=*max_element(C.begin(),C.end());
        int high=0;
        for(int x:C){
            high+=x;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int painters=1;
            int length=0;
            for(int x:C){
                if(length+x<=mid){
                    length+=x;
                }
                else{
                    painters++;
                    length=x;
                }
            }
            if(A>=painters){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        long long ans=1LL*low*B;
        return ans%mod;
    }
};