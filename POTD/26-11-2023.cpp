class Solution {
public:
    void solve(int n, vector<int>& out) {
        out.push_back(n);
        if (n <= 0)
            return;
        solve(n - 5, out);
        out.push_back(n);
    }

    vector<int> pattern(int N) {
        vector<int> out;
        solve(N, out);
        return out;
    }
};
