class Solution {
  public:
  
    bool compare(pair<int,int> i1, pair<int,int> i2)
    {
        return (i1.first < i2.first);
    }
  
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        vector<pair<int,int>> diff;
        pair<int,int> temp;
        for(int i=0;i<n;i++){
            if(arr[i]-brr[i]==0){
                temp.first=0;
                temp.second=i;
            }
            diff.push_back(make_pair(arr[i]-brr[i],i));
        }
        sort(diff.begin(),diff.end());
        auto it = lower_bound(diff.begin(),diff.end(),temp);
        int d = it - diff.begin();
        int i=n-1;
        long long tip=0;
        if(n-x>=d && y>n-x){
            y=n-x;
        }else if(n-x<d && y<=d){
            x=n-y;
        }else if(n-x<d && y>d){
            x=n-d;
            y=d;
        }
        
        
        
        while(i>n-1-x && diff[i].second!=-1){
            tip+=arr[diff[i].second];
         
            diff[i].second=-1;
            i--;
        }
        int j=0;
        while(j<y && diff[j].second!=-1){
            tip+=brr[diff[j].second];
           
            j++;
        }
        return tip;
    }
};
