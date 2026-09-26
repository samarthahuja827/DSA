class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
       int n=arr.size();
       priority_queue<pair<long double,int>> pq;
       vector<int> placed(n-1,0);
       for(int i=0;i<n-1;i++){
        long double gap=arr[i+1]-arr[i];
        pq.push({gap,i});
       }
       for(int station=1;station<=k;station++){
        auto [sectionLen,index]=pq.top();
        pq.pop();
        placed[index]++;
        long double gap=arr[index+1]-arr[index];
        long double newSection=gap/(placed[index]+1);
        pq.push({newSection,index});
       }
       return pq.top().first;
    }
};