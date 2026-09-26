//BRUTE FORCE
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for(int i=0;i<=nums.size();i++){
            for(int j=i+1;j<=nums.size();j++){
                if(nums[i]>nums[j]) return false;
            }
            }
            return true;
		}
};
//My( OPtimal approach)
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for(int i=0;i<=nums.size()-2;i++){
                if (nums[i]>nums[i+1]){
                    return false;
                }
            }
            return true;
		}
};
