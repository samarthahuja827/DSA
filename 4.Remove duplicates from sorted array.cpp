// REMOVE DUPLICATES FROM SORTED ARRAY

// BRUTE FORCE (storing in Set as set can only store unique values)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        //Storing      
        for(int i=0;i<=nums.size()-1;i++){
            st.insert(nums[i]); // NlogN
        }
        //Counting
        int index=0;
        for(auto it: st){
            nums[index]=it;
            index++;
        }
        return index;
    }
};
// TC: O(N logN)
// SC: O(N)

// OPTIMAL APPROACH (2 pointers , if val at i != val at j then put value at j in i+1 and increment i)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<=nums.size()-1;j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};
// TC: O(N)
// SC: O(1)
