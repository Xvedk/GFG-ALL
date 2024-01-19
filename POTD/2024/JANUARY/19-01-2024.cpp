struct comp {
    bool operator()(const std::pair<int, int>& p1, const std::pair<int, int>& p2) const {
        if (p1.first != p2.first) return p1.first > p2.first;
        return p1.second < p2.second;
    }
};
class Solution {
  public:
    vector<vector<int>> kTop(vector<int>& a, int n, int k) {
        vector<int> v;
        multiset<pair<int, int>, comp> ms;
        map<int, int> mp;
       int i=0;
        vector<vector<int>> ans;
        while(i<n){
            if (ms.find({mp[a[i]], a[i]})!=ms.end()) ms.erase({mp[a[i]], a[i]});
            mp[a[i]]++;
            ms.insert({mp[a[i]], a[i]});
            v.clear(); int nk=k;
            for(auto val:ms) {
                if (nk<=0) break;
                if (val.second==0) break;
                v.push_back(val.second);
                nk--;
            }
            ans.push_back(v);
            i++;
        }

        return ans;
    }
};

