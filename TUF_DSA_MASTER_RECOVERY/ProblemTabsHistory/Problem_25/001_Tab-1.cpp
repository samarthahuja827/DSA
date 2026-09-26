class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // copy nums2 in nums1 and then sort
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        // OR THIS LOOP
        // for(int i=m;i<m+n;i++){
        //     nums1[i]=nums2[i-m];
        // }
        sort(nums1.begin(),nums1.end());
    }
};