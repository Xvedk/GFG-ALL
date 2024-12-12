int countFreq(vector<int>& arr, int target) {
        // code here
        int ans=0,ind=-1;
        int i=0,n=arr.size()-1;
        int j=n;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(arr[mid]==target)
            {
                ind=mid;
                ans++;
                break;
            }
            else if(arr[mid]<target)
                i=mid+1;
            else
                j=mid-1;
        }
        if(ind==-1)
            return 0;
        i=ind-1;
        while(i>=0 && arr[i--]==target)
            ans++;
        i=ind+1;
        while(i<=n && arr[i++]==target)
            ans++;
        return ans;

}
