class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(target==arr[i]) count++;
        }
        return count;
    }
};