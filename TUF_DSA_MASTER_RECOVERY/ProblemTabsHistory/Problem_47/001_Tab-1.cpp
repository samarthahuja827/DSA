class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<=nums.size()-1;i++){
            st.insert(nums[i]);
        }
        int index=0;
        for(auto it: st){
            nums[index]=it;
            index++;
        }
        return index;
    }
};