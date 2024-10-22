class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        int n = arr.size(), ans = 0, cnt = 0;
        map<int,int> mp;
        mp[0] = 1;
        for (int i = 0; i < n; i++){
            if (arr[i] == x){
                cnt++;
            }
            else if (arr[i] == y){
                cnt--;
            }
            ans += mp[cnt];
            mp[cnt]++;
        }
        return ans;
    }
};
