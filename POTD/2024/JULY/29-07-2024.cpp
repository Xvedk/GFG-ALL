class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > arr) {
        // code here
        int max_row =-1;int max_ones=0;
       for(int i =0;i<arr.size();i++)
       {
           auto it= std::lower_bound(arr[i].begin(),arr[i].end(),1);
           int ones= arr[i].size()-(it-arr[i].begin());
           if(ones>max_ones)
           {max_ones=ones;
               max_row=i;
           }
       }
       return max_row;
    }
};
