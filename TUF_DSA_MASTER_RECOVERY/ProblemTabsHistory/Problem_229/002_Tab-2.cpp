class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        // (ub-1)-lb + 1
        lb=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
        ub=upper_bound(arr.begin(),arr.end(),target)-arr.begin();

        if(lb==arr.size() || arr[lb]!=target){ // some value > target present or all values are < target, also target is not there
        return 0;
        }else{
            return (ub-1)-lb+1;
        }
    }
};