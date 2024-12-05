class Solution {
  private:
    void fill(vector<int> &arr, int &i, int val, int cnt) {
        while(cnt--) {
            arr[i++] = val;
        }
    }
  public:
    void sort012(vector<int>& arr) {
        // code here
        int zeros = 0, ones = 0, twos = 0;
        for(int it: arr) {
            if(it == 0)
                zeros++;
            else if(it == 1)
                ones++;
            else 
                twos++;
        }
        
        int i = 0;
        
        fill(arr, i, 0, zeros);
        fill(arr, i, 1, ones);
        fill(arr, i, 2, twos);
    }
};
