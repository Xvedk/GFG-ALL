vector<int> findMissing(int a[], int b[], int n, int m) 
    { vector<int>ans;
        unordered_map<int,bool>mp;
        for(int i=0;i<m;i++) mp[b[i]]=true;
        
        for(int i=0;i<n;i++)if(mp[a[i]]!=true)ans.push_back(a[i]);
        
        return ans;
    }
