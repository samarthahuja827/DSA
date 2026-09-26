class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
        int l=0,r=0;
        vector<int> v;
        while(l<arr1.size() && r<arr2.size()){
            if(arr1[l]<arr2[r]){
                v.push_back(arr1[l]);
                l++;
            }

            else{
                v.push_back(arr2[r]);
                r++;
            }
        }
        while(l<arr1.size()){
            v.push_back(arr1[l]);
            l++;
        }
        while(r<arr2.size()){
            v.push_back(arr2[r]);
            r++;
        }
        if(v.size()%2==0){
            return ((double)v[v.size()/2] + v[(v.size()/2)-1])/2;
        }else{
            return v[(v.size()/2)];
        }
    }
};

class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
     for(int i=0;i<arr2.size();i++){
        arr1.push_back(arr2[i]);
     }
     sort(arr1.begin(),arr1.end());
     if(arr1.size()%2==0){
        return ((double)arr1[arr1.size()/2]+arr1[arr1.size()/2-1])/2;
     }
     else{
        return arr1[arr1.size()/2];
     }
    }
};