bool linearSearch(vector<int>& nums,int num){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==num){
            return true;
        }
    }
    return false;
}
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int current,count;
        for(int i=0;i<nums.size();i++){
            count=1; 
            current=nums[i];
            while(linearSearch(nums,current+1)==true){
                current++;
                count++;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};