class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
//    bs
    int n1=a.size();
    int n2=b.size();
    if(n2<n1) return kthElement(b,a,k);

// imp change. in median, we knew median exactly lies at (n+1)/2 but here k can lie at any position. mid2 = k - mid1 can go outside array b. [in median n1 <= n2 always but here it can be from 1 to n1+n2]
    int low=max(0,k-n2); 
    int high=min(k,n1);
    // max(0, k - n2) <= mid1 <= min(k, n1)
    
    while(low<=high){
        int mid1=(low+high)/2;
        int mid2=k-mid1;

        int l1=INT_MIN, l2=INT_MIN, r1=INT_MAX, r2=INT_MAX;
        if(mid1>0) l1=a[mid1-1];
        if(mid2>0) l2=b[mid2-1];
        if(mid1<n1) r1=a[mid1];
        if(mid2<n2) r2=b[mid2];

        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        else if(l1>r2){
            high=mid1-1;
        }
        else{
            low=mid1+1;
        }
    }
    return 0;
  }
};