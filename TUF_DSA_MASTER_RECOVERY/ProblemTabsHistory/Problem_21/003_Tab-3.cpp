class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        // hash array
        int n=nums.size();
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        int a,b;
        for(int i=1;i<=n;i++){
            if(freq[i]==2){
                a=i;
            }
            if(freq[i]==0){
                b=i;
            }
        }
        return {a,b};
    }
};

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        // sort and then check if adj elems r
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                a=nums[i];
            }
        }
        for(int i=1;i<=n;i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                b=i;
                break;
            }
        }
        return {a,b};
    }
};