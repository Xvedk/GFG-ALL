class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int curcount = 1;
        int lastcount = 1;
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if( arr[i + 1]  == arr[i] + 1)
                curcount++;
            else if( arr[i + 1] == arr[i])
                continue;
            else
                {
                    lastcount = curcount > lastcount ? curcount : lastcount;
                    curcount = 1;
                }
        }
        return curcount > lastcount ? curcount : lastcount;
    }
};
