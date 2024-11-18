class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n;
    if (d == 0) return;

    vector<int> temp(arr.begin(), arr.begin() + d);
    arr.erase(arr.begin(), arr.begin() + d);
    arr.insert(arr.end(), temp.begin(), temp.end());
  }
};
