class Solution{
public:
    void reverse(int arr[], int n;int i){
        int i=0;
        if(i>=n/2){
            return;
        }
        swap(a[i],a[n-i-1]);
        reverse(arr[],n,i+1);
        return arr[];
    }
};
