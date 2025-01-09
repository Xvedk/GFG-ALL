 vector<int> subarraySum(vector<int> &arr, int target) {
           
           int n =arr.size();
           int sum=0;
      
           int i=0;
           while (i<n && sum<target){
              sum+=arr[i];
              i++;
           }
           if (sum==target) return {1,i};
           int j=0;
           while (i<n+1 && j<n ){
                sum-=arr[j];
                j++;
                while (i<n && sum<target){
                    sum+=arr[i];
                
                    i++;
                }
                   if (sum==target){
                    return {j+1,i};
                }
           }
           
           return {-1};
        //   int i=0;
        //   while (i<n &&sum<target){
        //       sum+=arr[i];
        //       i++;
        //   }
           
        //   if (i==n && sum!=target) return {-1};
        //   if (sum==target) return {1,i+1};
        //   int startindex=0;
        //   for (int j=i;j<n;j++){
               
        //       sum+=arr[j];
        //       if (sum==target) return {startindex+1,j+1};
        //       if (sum>target) {sum-=arr[n-i-1]; startindex++;}
        //   }
           
        //   return {-1};
           
           
    }
