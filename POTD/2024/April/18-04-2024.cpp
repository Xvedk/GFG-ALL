class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        int x = -1,y = -1;
        for(int i = 0;i<n+2;i++){
            if(arr[abs(arr[i])-1]<0){
                if(x==-1){
                    x= abs(arr[i]);
                }else{
                    y = abs(arr[i]);
                }
            }else{
                arr[abs(arr[i])-1] = - arr[abs(arr[i])-1];
            }
        }
        return {x,y};
    }
