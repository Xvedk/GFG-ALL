class Solution {
  public:
    string armstrongNumber(int n){
        string n_ = to_string(n);
        int sum = 0;
        for(auto c : n_) {
            sum += pow((c-'0'), 3);
        }
        if(sum == n)
            return "Yes";
        return "No";
    }
};
