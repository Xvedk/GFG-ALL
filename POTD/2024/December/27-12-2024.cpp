class Solution {
   public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            int consonant=target-arr[i];
            if(mp.find(consonant)!=mp.end())
            {
                count+=mp[consonant];
            }
            mp[arr[i]]++;
        }
        return count;
    }
};
