class Solution {
  public:
    int swapNibbles(int n) {
        // decimal number to binary string
        string numStr = std::bitset<8>(n).to_string();
        for(int i=0; i<4; i++){
            char t = numStr[i];
            numStr[i] = numStr[4+i];
            numStr[4+i] = t;
        }
        // returning binary string to decimal number
        return std::stoi(numStr, nullptr, 2);
    }
};
