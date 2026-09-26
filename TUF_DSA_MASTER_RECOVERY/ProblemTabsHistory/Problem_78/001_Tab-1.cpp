class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
       int n=arr.size();
       vector<int> placed(n-1,0);
       for(int stations=1;stations<=k;stations++){
            int index=-1;
            long double maxDist=-1;
            for(int i=0;i<n-1;i++){
                long double gap=arr[i+1]-arr[i];
                long double sectionLen=gap/(placed[i]+1);
                if(sectionLen>maxDist){
                    maxDist=sectionLen;
                    index=i;
                }
            }
            placed[index]++;
       }

       long double ans=0;
       for(int i=0;i<n-1;i++){
        long double gap=arr[i+1]-arr[i];
        long double sectionLen=gap/(placed[i]+1);
        ans=max(ans,sectionLen);
       }
       return ans;
    }
};