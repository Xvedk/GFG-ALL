class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
       int n=arr.size();
       int first_bada=arr[0];
       int second_bada=arr[1];
       if(first_bada<second_bada){
           swap(first_bada,second_bada);
       }
       for(int i=2;i<n;i++){
           if(arr[i]>first_bada){
               second_bada=first_bada;
               first_bada=arr[i];
           }
           else if(arr[i]>second_bada && arr[i]<first_bada){
               second_bada=arr[i];
           }
       }
     
       if(first_bada==second_bada){
           return -1;
       }
         return second_bada;
    }


};
