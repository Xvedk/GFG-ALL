class Solution {
  public:
  bool search(int i,vector<string>&arr,char c){
      int x=i;
      for(int i=0;i<arr.size();i++){
          string d;
          d+=arr[i];
          if(d[x]!=c){
              return false;
          }
        }
      return true;
  }
    string longestCommonPrefix(vector<string> arr) {
        string res,m,k;
        int i=0;
        if(arr.size()==1){
            return arr[0];
        }
        m+=arr[0];
        while(i<m.length()){
            if(search(i,arr,m[i])){
                k+=m[i];
            }
            else{
                break;
            }
            i+=1;
        }
        string a="-1";
        if(k.length()<1){
            return a;
        }
        return k;
    }
};
