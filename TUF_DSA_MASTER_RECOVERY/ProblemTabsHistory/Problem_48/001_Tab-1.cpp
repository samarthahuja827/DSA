class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       // brute force (create new array) 
        // set<int> st;
        // for(int i=0;i<nums1.size();i++){
        //     st.insert(nums1[i]);
        // }
        // for(int i=0;i<nums2.size();i++){
        //     st.insert(nums2[i]);
        // }
        // vector<int> v;
        // for(auto it: st){
        //     v.push_back(it);
        // }
        // return v;

    
// 2nd approach
int i=0,j=0;
vector<int> v;
while(i<nums1.size() and j<nums2.size()){
    if(nums1[i]<=nums2[j] ){
    if(v.empty() ||v.back()!=nums1[i] ){ // last added element is not same as what u r going to add OR v is not empty
        v.push_back(nums1[i]);
           }
           i++;}
    else{
            if(v.empty() ||v.back()!=nums2[j] ){
            v.push_back(nums2[j]);
        }
        j++;
    }}
    while(i<nums1.size()){ // if elements in nums1 still remain
        if(v.empty() || v.back()!=nums1[i]){
            v.push_back(nums1[i]);
            
        }
        i++;
    }
    while(j<nums2.size()){ // if elements in nums2 still remain
         if(v.empty() ||v.back()!=nums2[j] ){
            v.push_back(nums2[j]);
            
        }
        j++;
    }
    return v;












        // my approach = push and then sort
        // for(int i =0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j]){
        //             break;
        //         }
        //     }
        //     nums2.push(nums1[i]);
        // }
    }
};