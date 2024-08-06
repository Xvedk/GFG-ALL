class Solution {
  public:
    int isValid(string str) {
        string cur="";
        int count=0;
        for (int i=0;i<str.size();i++)
        {
            if (str[i]=='.')
            {
                if (cur.size()==0) return false;
                if (cur[0]=='0' && cur.size()!=1) return false;
                if (cur.size()>=3 && cur>"255") return false;
                count++;
               
                cur="";
            }
            else cur+=str[i];
        }
        if (cur.size()==0) return false;
        if (cur[0]=='0' && cur.size()>1) return false;
        if (cur.size()>=3 && cur>"255") return false;
        count++;
       
        if (count!=4) return false;
        return true;
    }
};
