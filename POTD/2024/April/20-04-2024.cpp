class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i =0;
        int j=0;
       
        set<int>s;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                s.insert(arr1[i]);
                i++;
            }
            else if(arr1[i]>arr2[j]){
                s.insert(arr2[j]);
                j++;
            }
            else if(arr1[i]==arr2[j]){
                s.insert(arr1[i]);
                i++;
                j++;
            }
           
            
        }
         while(i<n){
             s.insert(arr1[i]);
             i++;
                
            }
            while(j<m){
                s.insert(arr2[j]);
                j++;
            }
             vector<int>v(s.begin(),s.end());
            
        return v;
    }
};
