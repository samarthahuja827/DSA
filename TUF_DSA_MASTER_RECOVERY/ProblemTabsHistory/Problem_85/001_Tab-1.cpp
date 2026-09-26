// 1
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        // ek baar aage se loop ek baar piche se loop
      int first=-1;
      int last=-1;
      for(int i=0;i<nums.size();i++)  {
        if(nums[i]==target){
            first=i;
            break;
        }
      }
      for(int i=nums.size()-1;i>=0;i--)  {
        if(nums[i]==target){
            last=i;
            break;
        }
      }
      return {first,last};
    }
};

// 2
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
      int first=-1;
      int last=-1;
      for(int i=0;i<nums.size();i++)  {
        if(nums[i]==target){
            first=i;
            break;
        }
      }
      for(int i=0;i<nums.size();i++)  {
        if(nums[i]==target){
            last=i;
        }
      }
      return {first,last};
    }
};