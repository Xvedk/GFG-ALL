class Solution
{
  public:
    int maxOccured(int n, int l[], int r[], int maxx) 
    {
        vector<int> prefix(maxx+1,0);
        for(int i=0;i<n;i++)
        {
            int x = l[i];
            int y = r[i];
            if(y==maxx)
            {
                prefix[x]++;
            }
            else
            {
                prefix[x]++;
                prefix[y+1]--;
            }
        }
        for(int i=0;i<prefix.size();i++)
        {
            if(i)
            {
                prefix[i]+=prefix[i-1];
            }
        }
        int ans = 0;
        int cnt = 0;
        int temp = 0;
        for(int i=0;i<prefix.size();i++)
        {
            cnt = max(cnt,prefix[i]);
            if(cnt>temp)
            {
                ans = i;
                temp = cnt;
            }
        }
        return ans;
    }
};
