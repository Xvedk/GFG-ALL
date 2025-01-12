class Solution {
  public:
     int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();//here n = arr.size();
        vector<int> left(n),right(n);//create two diffrent array vector initialize with 0;
        left[0]=arr[0];//refrence left[0] value with arr[0] value
        for(int i=1;i<n;i++)//now start the looop for max value of arr[i] or left[i-1] for
        //left[i];
        {
            left[i]=max(left[i-1],arr[i]);
        }
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)//similar for right[i];
        {
            right[i]=max(right[i+1],arr[i]);
        }
        //two vectors has been created;
        int water=0;//now we use this method or logic to calculate water;
        for(int i=0;i<n;i++)
        {
            water+=min(right[i],left[i])-arr[i];
        }
        return water;
    }
};
