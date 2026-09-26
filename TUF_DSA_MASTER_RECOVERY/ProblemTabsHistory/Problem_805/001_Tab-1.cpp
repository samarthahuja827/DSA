class Solution {
public:
    int paint(int A, int B, vector<int>& C) {
        int mod=10000003;
       int mn=*max_element(C.begin(),C.end());
       int total=0;
       for(int x:C){
        total+=x;
       }
    //    Max board length
       for(int maxLength=mn;maxLength<=total;maxLength++){
        int painters=1;
        int length=0;
        for(int x: C){
            if(length+x<=maxLength){
                length+=x;
            }
            else{
                painters++;
                length=x;
            } 
        }
        if(painters<=A){
            long long ans=1LL*maxLength*B;
            return ans%mod;
        }
       }
       return -1;
    }
};