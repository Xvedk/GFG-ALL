class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.''
        
        int sum1=0;
        int sum2=0;
        
       for(int i=0;i<n;i++)
       {
           sum1=sum1+arr1[i];
       }
        for(int i=0;i<n-1;i++)
       {
           sum2=sum2+arr2[i];
       }
        int p= sum1-sum2;
        int x;
        
        for(int i =0; i<n;i++)
        {
            if(arr1[i]==p)
            {
                return i;
            }
        }
        
    }
};
