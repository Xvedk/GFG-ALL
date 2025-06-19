class Solution {
  public:
    string caseSort(string& s) {
        // small - 97-122 
        // capital - 65-90 

        // gEkeSs -> eEgkSs 
        // gkes -> egks
        // ES -> ES
        // eEgkSs

        string small = "", capital = "";
        for(auto &ch: s) {
            if(ch > 96) small += ch;
            else capital += ch;
        }
        sort(small.begin(), small.end());
        sort(capital.begin(), capital.end());
        int i = 0, j = 0;
        for(auto &ch: s) {
            if(ch > 96) ch = small[i++];
            else ch = capital[j++];
        }
        return s;
    }
};
