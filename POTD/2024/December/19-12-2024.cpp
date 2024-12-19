class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int maxi = *max_element(arr.begin(),arr.end()); 
        int high = maxi+k; 
        
        unordered_map<int,int>map; 
        for(auto i: arr) map[i]++; 
        int count = 0; 
        for(int i= 1; i<= high; i++){
            if(map.find(i)==map.end()){
                count++; 
                if(count==k){
                    return i; 
                }
            }
        }
        
        return -1; 
    }
};

