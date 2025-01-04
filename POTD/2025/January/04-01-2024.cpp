class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) 
    {
        int count = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for(int i = 0; i < arr.size() -2; i++)
        {
            int start = i+1;
            int end   = arr.size() - 1;
            while(start < end)
            {
                if(arr[i] + arr[start] + arr[end] == target)
                {
                    //cout << " sum is " <<  arr[i] + arr[start] + arr[end] << endl;
                    //cout << "i " << i << " j " << start << " k " << end << endl;
                    count++;
                    int temp = start+1;
                    while(temp < end && arr[temp] == arr[temp-1])
                    {
                        temp += 1;
                        count++;
                    }
                    end--;
                    
                }
                else if(arr[i] + arr[start] + arr[end] > target)
                    end--;
                else
                    start++;
                
            }
        }
        return count;
        // Code Here
    }
};
