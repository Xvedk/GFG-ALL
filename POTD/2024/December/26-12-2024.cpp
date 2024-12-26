class Solution {
  public:
    bool twoSum(vector<int>& arr, int sum) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            int target=sum-arr[i];
            if(mp.find(target)!=mp.end())
            {
              return true;  
            }
            else
            {
                mp[arr[i]]=i;
            }
        }
        return false;
    }
};

