class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
       for(int i=0;i<nums.size();i++){
            set<int> hashset;
            for(int j=i+1;j<nums.size();j++){
                int third=-(nums[i]+nums[j]);
                if(hashset.find(third)!=hashset.end()){ // means third is present in it
                    vector<int> triplet={nums[i],nums[j],third};
                    sort(triplet.begin(),triplet.end());
                    st.insert(triplet);
                }
                hashset.insert(nums[j]);
            }
       }
       return vector<vector<int>> (st.begin(),st.end());
    }
};