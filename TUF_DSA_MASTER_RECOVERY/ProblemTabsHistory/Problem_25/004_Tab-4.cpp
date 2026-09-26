class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // STL function used but generally optimal one is asked
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        inplace_merge(nums1.begin() , nums1.begin()+m, nums1.end()); // (first pos, middle pos, end pos)
        // It means nums1.begin() se m tak ek sorted part hai, aur m se end tak doosra sorted part hai. Dono ko merge karke poora range sorted kar de.
    }
};