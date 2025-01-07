class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0, r = n - 1;
        int count = 0;

        while (l < r) {
            int sum = arr[l] + arr[r];

            if (sum > target) {
                r--;
            } else if (sum < target) {
                l++;
            } else {
                count++;
                int nst = l+1;
                while(nst<r and arr[nst]==arr[nst-1]){
                    nst++;
                    count++;
                }
                r--;
            }
        }
        return count;
    }
};
