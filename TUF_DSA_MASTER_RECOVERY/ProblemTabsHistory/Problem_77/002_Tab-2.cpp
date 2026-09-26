class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
        vector<int> v(arr1.size()+arr2.size());
        merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),v.begin());
        if(v.size()%2==0){
            return (((double)v[v.size()/2]+v[v.size()/2 -1]) /2);
        }else{
            return v[v.size()/2];
        }
    }
};

class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
        // no need to store merged array
        int n=arr1.size()+arr2.size();
        int l=0,r=0;
        int idx1=n/2 -1;
        int idx2=n/2;
        int count=0;
        int idx1elem=-1,idx2elem=-1;
        while(l<arr1.size() && r<arr2.size()){
            if(arr1[l]<arr2[r]){
                if(count==idx1) idx1elem=arr1[l];
                if(count==idx2) idx2elem=arr1[l];
                count++;
                l++;
            }
            else{
                if(count==idx1) idx1elem=arr2[r];
                if(count==idx2) idx2elem=arr2[r];
                count++;
                r++;
            }
        }
        while(l<arr1.size()){
            if(count==idx1) idx1elem=arr1[l];
            if(count==idx2) idx2elem=arr1[l];
            count++;
            l++;
        }
        while(r<arr2.size()){
            if(count==idx1) idx1elem=arr2[r];
            if(count==idx2) idx2elem=arr2[r];
            count++;
            r++;
        }
        if(n%2==1) return idx2elem;
        else return ((double)idx1elem+idx2elem)/2;
    }
};