class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        long long product = 1;
        vector<long long>ans;
        for(int i = 0; i < nums.size(); i++) {
            product = 1;
            for(int j = 0; j < nums.size(); j++) {
            if(i != j ){
                product *= nums[j];
            }
        }
        ans.push_back(product);
        }
        return ans;
   }
};
