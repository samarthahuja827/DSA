class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int a,b;
        for(int i=1;i<=nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    count++;
                }
            }
            if(count==2){
                a=i;
            }else if(count ==0){
                b=i;
            }
        } 
        // u can use break, after using a and b =-1 if both are !=-1 break
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans; // instead of these 4 lines u can write return {a,b}
    }
};