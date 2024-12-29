class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
     set<int>s;
     for(auto it:a){
         s.insert(it);
     }
     vector<int>v;
     for(auto it:b){
         if(s.find(it)!=s.end()){
             v.push_back(it);
             s.erase(it);  //to avoid duplicate entry in v
         }
         
     }
     return v;
    }
};
