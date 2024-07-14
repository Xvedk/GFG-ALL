class Solution {
  public:
    string smallestNumber(int s, int d) {
        string ans = "";
        while(ans.size()<d){
            int mini = s - (d - ans.size() - 1)*9;
            if(mini <= 0 and ans.size()==0){
                ans.push_back('1');
                s-=1;
                continue;
            }
            else if(mini <= 0){
                ans.push_back('0');
                continue;
            }
            string minis = to_string(mini);
            if(minis.size()>1){
                return "-1";
            }
            ans += minis;
            s -= mini;
        }
        return (s > 0)?"-1":ans;
    }
};
