// LEFT ROTATE ARRAY BY 1 
// BRUTE FORCE (extra temp array)
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        vector<int> temp(nums.size());
      for (int i=1;i<=nums.size()-1;i++){
        temp[i-1]=nums[i];
      }
      temp[nums.size()-1]=nums[0];
      nums=temp;
    }
};
//OPTIMAL
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp= nums[0];
        for(int i=0;i<=nums.size()-2;i++){
           nums[i]=nums[i+1];
        }
        nums[nums.size()-1]=temp;
    }
};


// RIGHT ROATATE ARRAY BY 1
class Solution {
  public:
    void rotate(vector<int> &arr) {
        int temp=arr[arr.size()-1];
        for(int i=arr.size()-1;i>=1;i--){
            arr[i]=arr[i];
        }
        arr[0]=temp;
    }
};
