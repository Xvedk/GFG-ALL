class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int>pq;
        int j=0;
        while(j<k) {
            pq.push(arr[j]);
            j++;
        }
        for(int i=j;i<arr.size();i++){
            pq.push(arr[i]);
            pq.pop();
        } 
        return pq.top();
    }
};
