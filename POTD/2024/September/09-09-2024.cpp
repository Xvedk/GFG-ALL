class Solution {
  public:
    void sort012(vector<int>& arr) {
        int f[3], j = 0; f[0] = f[1] = f[2] = 0;
        for ( auto i : arr ) f[i]++;
        while ( f[0]-- ) arr[j++] = 0;
        while ( f[1]-- ) arr[j++] = 1;
        while ( f[2]-- ) arr[j++] = 2;
    }
};
 
