class Solution
{
    public:
    int padovanSequence(int n)
    {
       //code here
        if(n <= 2)
            return 1;
        long long int MOD = 1000000007;
        long long int f = 1, s = 1, t = 1, fr = 2;
        for(int i = 3; i<n; i++){
           f = s;
           s = t;
           t = fr;
           fr = (f + s)%MOD;
        }
        return fr;
    }
};
