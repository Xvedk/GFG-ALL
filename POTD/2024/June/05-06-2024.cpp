class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
         sort(a,a+n);
        sort(b,b+m);
        
        int suma=0,sumb=0;
        
        for(int i=0;i<n;i++)
        suma+=a[i];
 
        for(int i=0;i<m;i++)
        sumb+=b[i];
       
        if(suma==sumb) return 1;
        
        int i=0,j=0;
        
        while(i<n && j<m)
        {
            int tempa,tempb;
            
            tempa = suma + (b[j]-a[i]);
            tempb = sumb + (a[i]-b[j]);
            
            if(tempa==tempb) return 1;
            
            else if(tempa>tempb)
            {
                i++;
            }
            else
            {
                j++;
            }
            
        }
        
        return -1;
    }
};
