class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int size = str.size();
        vector<int> character(26,0);
        int count = 0;
        for(char i: str)
        {
            if(i == ' ') size --;
            else
            {
                if(character[i%97]==0)
                {
                    character[i%97] = 1;
                    count ++;
                }
            }
        }
        if (size<26) return false;
        if (26-count > k) return false;
        return true;
    }
};
