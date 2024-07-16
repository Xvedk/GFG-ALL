class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        string remainingstr ="";
        
        for(int i=0;i<s.length();i++){
            if(s[i]==ch && count>0)
            count--;
           else if(count==0)
            remainingstr+=s[i];
        }
        return remainingstr;
    }
};
