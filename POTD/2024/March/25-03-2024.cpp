class Solution{
public:	
    void solve(vector<string> &result, string &temp, int n, int count)
    {
        if(n == 0)
        {
            result.push_back(temp);
            return ;
        }
        temp += '1';
        solve(result, temp, n - 1, count + 1);
        temp.pop_back();
        if(count > 0)
        {    
            temp += '0';
            solve(result, temp, n - 1, count - 1);
            temp.pop_back();
        }
    }
	vector<string> NBitBinary(int n)
	{
	    vector<string> result;
	    string temp = "";
	    solve(result, temp, n, 0);
	    return result;
	}
};
