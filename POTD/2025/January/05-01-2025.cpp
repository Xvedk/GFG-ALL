class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        
        
        sort(arr.begin(),arr.end());
        
        int count =0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]+arr[j]>=target){
                    break;
                }else{
                    count++;
                }
            }
        }
        return count;
    }
};
