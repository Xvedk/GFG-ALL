class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int water = 0;
        int i=0, j=arr.size()-1;
        
        while(i < j) {
            int res = min(arr[i], arr[j]) * (j-i);
            water = max(water, res);
            
            if(arr[i] < arr[j])
                i++;
            else
                j--;
        }
        
        return water;
    }
};
