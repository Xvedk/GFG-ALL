class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        int count=0;
        int i=n-1;
        
        while(i>1)
        {
            int start=0;
            int end=i-1;
            
            while(start < end)
            {
                if(arr[start] + arr[end]  > arr[i])
                {
                    count+=(end-start); //for 3467 start=3 , end=6 and i =7 here if we fix
                    end--;              // end&i which are 6&7, if num at start + end > i
                }                       //that means all numbers afer start satisfy
                                        //hence add also like 467,367 in this case
                                        
                                        
                else{
                    start++;
                }
            }
            
            i--;
        }
        
        return count;
    }
};
