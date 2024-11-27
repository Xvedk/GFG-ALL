class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        map<int , int>mp;
        for(int i =0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(int i =1;i<=n+1;i++){
            if(mp.find(i)  == mp.end()){
                return i;
            }
        }
    }
};
