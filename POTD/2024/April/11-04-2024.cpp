class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
        string binN = bitset<32>(n).to_string();
        string grayN = binN.substr(0, 1);
        for(int i = 1; i < 32; i++){
            grayN += to_string((binN[i] - '0') ^ (grayN[i - 1] - '0'));
        }
        return stoi(grayN, nullptr, 2);
        
    }
};
