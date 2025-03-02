class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<k;i++){
            pq.push({arr[i],i});
        }
        vector<int>ans;
        ans.push_back(pq.top().first);
        int i=k;
        while(i<n){
            pq.push({arr[i],i});
            while(!pq.empty() && abs(pq.top().second-i)>=k){
                pq.pop();
            }
            if(!pq.empty())
            ans.push_back(pq.top().first);
            i++;
        }
        return ans;
    }
};
