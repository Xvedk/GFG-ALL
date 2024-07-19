class Solution {
    

    void merge(vector<int>&arr,int s,int mid,int e,
       vector<pair<int,int>>&p,vector<int>&ans){
    
    vector<pair<int,int>>temp(e-s+1);
    int i=s;
    int j=mid+1;
    
    int k=0;

while(i<=mid && j<=e){
    
    if(p[i].first<=p[j].first){
        
        temp[k]=p[j];
        k++;
        j++;
    }
    
    else {
        
        ans[p[i].second]+=e-j+1;
       
       temp[k]=p[i];
        k++;
        i++; 
        
    }
}


while(i<=mid){
      temp[k]=p[i];
        k++;
        i++; 
    
}
        
   while(j<=e){
         temp[k]=p[j];
        k++;
        j++;
       
   }  
    
    for(int i=s;i<=e;i++){
        
        p[i]=temp[i-s];
    }
    
}
    
    void mergesort(vector<int>&arr,int s,int e, vector<pair<int,int>>&p,vector<int>&ans){
        
        
      
      if(s>=e){
          return;
      }
            
           
           int mid=s+(e-s)/2;
           
           mergesort(arr,s,mid,p,ans);
           mergesort(arr,mid+1,e,p,ans);
           
           merge(arr,s,mid,e,p,ans);
            
        }
    
  public:
    vector<int> constructLowerArray(vector<int> &arr) {


int n=arr.size();


vector<pair<int,int>>p(n);


for(int i=0;i<n;i++){
    
    p[i]={arr[i],i};
}


vector<int>ans(n,0);
mergesort(arr,0,n-1,p,ans);

return ans;

    }
};
