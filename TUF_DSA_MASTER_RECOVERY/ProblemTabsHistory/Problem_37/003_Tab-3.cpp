class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 2 pointer retaining original indices using pair in vector
        vector<pair<int,int>> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int start=0;
        int end=nums.size()-1;
        while(start<end){
            int sum = arr[start].first+arr[end].first;
            if(sum==target){
                return {arr[start].second,arr[end].second};
                break;
            }
            else if(sum<target){
                start++;
            }
            else end--;
        }
        return {};
    }
};