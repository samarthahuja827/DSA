class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
            // Take current interval's start and end
            int start=arr[i][0];
            int end=arr[i][1];

            // If this interval is already completely covered by the last merged interval, skip it
            if(!ans.empty() && end<=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<arr.size();j++){ //Check all following intervals for overlap
                if(arr[j][0]<=end){ //overlap 
                    end=max(end,arr[j][1]); // extend the ending pt if reqd
                }
                else{
                    break; // Since intervals are sorted, no further interval can overlap
                }
            }
            ans.push_back({start,end});
        }
        return ans;
    }
};