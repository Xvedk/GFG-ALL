class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        unordered_map<int, int> hm;
        int max_dist=0;
        for(int i = 0; i < arr.size(); i++){
            if(hm.find(arr[i]) != hm.end()){
                max_dist=max(max_dist, (i-hm[arr[i]]));
            } else hm[arr[i]] = i;
        }
        return max_dist;
    }
};
