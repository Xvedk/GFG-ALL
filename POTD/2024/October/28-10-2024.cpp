class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int>g(101 , 0);
        int i = 0;
        int d = 1;
        g[arr[0]] = 1;
        int n = arr.size();
        for(int j =1 ; j < n; j++){
            if(g[arr[j]] == 1){
                continue;
            }
            g[arr[j]] = 1;
            i++;
            swap(arr[i], arr[j]);
            d++;
        }
        for(int i = d ; i< n ;i++){
            arr.pop_back();
        }
        return arr;
    }
};
