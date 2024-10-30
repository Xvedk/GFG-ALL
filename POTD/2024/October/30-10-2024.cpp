class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        
        // map to count frequency
        unordered_map<int,int>umap;
        
        //counting frequency        
        for(int i = 0; i < arr.size(); i++){
        	umap[arr[i]]++;
		}
		
		// variable to store ans
		int total = 0;
		
		//checking if k + arr[i] element exists in array
		for(int i = 0; i  < arr.size(); i++){
			
			//main condition 
		    if(umap.count(k+arr[i])){
		            //adding frequency to total
					total += umap[k+arr[i]];
			}
			
		}
		
		return total;
    }
};
