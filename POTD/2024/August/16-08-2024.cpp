class Solution
{
    public:
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        
        // here is tabulation approach
        vector<int> tab(n,0);
        if(n>=x)
            tab[n-x]=1;
        if(n>=y)
            tab[n-y]=1;
        if(n>=z)
            tab[n-z]=1;
        for(int i=n-1;i>0;i--){
            if(!tab[i])
                continue;
            if(i>=x)
                tab[i-x]=max(tab[i-x],tab[i]+1);
            
            if(i>=y)
                tab[i-y]=max(tab[i-y],tab[i]+1);
                
            if(i>=z)
                tab[i-z]=max(tab[i-z],tab[i]+1);
        }
        return tab[0];
    }
};
