class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        map<char, int> mapping;
        
        for(int i=0; i<s.length(); i++) {
            mapping[s[i]]++;
        }
        
        for(int i=0; i<s.length(); i++) {
            if(mapping[s[i]] == 1)
                return s[i];
        }
        return '$';
    }
};
