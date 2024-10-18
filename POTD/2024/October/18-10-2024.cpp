class Solution {
  public:
    int getSingle(vector<int>& arr) 
    {
        int count = 1;
        sort(arr.begin(),arr.end());
        if(arr.size() == 1)
            return arr[0];
        for(int i = 1;i < arr.size(); i++)
        {
            if(arr[i] != arr[i-1])
            {
                if(count%2 != 0)
                    return arr[i-1];
                else
                    count = 0;
                
            }
             count++;   
        }
        if(count%2 != 0)
            return arr[arr.size() -1];
        // code here
    }
};
