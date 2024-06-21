class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        vector<string> v;
        string s = "";
        for(auto ch : str){
            if(ch == '/' || ch == ',' ){
                v.push_back(s);
                s = "";
            }else if(ch == ' '){
                continue;
            }else{
                s += ch;
            }
        }
        v.push_back(s);
        int a = stoi(v[0]), b = stoi(v[1]);
        int c = stoi(v[2]), d = stoi(v[3]);
        
        double frac1 = a*1.0 / b*1.0;
        double frac2 = c*1.0 / d*1.0;
        
        if(frac1 == frac2){
            return "equal";
        }else if(frac1 > frac2){
            return v[0] + "/" + v[1];
        }
        return v[2] + "/" + v[3];
    }
};
 
