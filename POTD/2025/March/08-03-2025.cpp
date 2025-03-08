string longestPalindrome(string &s) {
        if (s.empty()) return "";
    
        int start = 0, maxLen = 0;
        
        auto expand = [&](int l, int r) {
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                l--;
                r++;
            }
            return r - l - 1; 
        };
        
        for (int i = 0; i < s.size(); i++) {
            int len1 = expand(i, i);   
            int len2 = expand(i, i+1); 
            int len = max(len1, len2);
            
            if (len > maxLen) {
                maxLen = len;
                start = i - (len - 1) / 2;
            }
        }
        
        return s.substr(start, maxLen);
    }
