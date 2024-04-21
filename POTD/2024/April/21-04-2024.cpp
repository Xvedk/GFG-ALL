class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        int n = arr.size();
        int lo=0,hi=n-1;
        for(int i=0;i<n and i<= hi ;i++){
            int curr = arr[i];
            if(curr < a){
                swap(arr[i],arr[lo]);
                lo++;
            }
            else if(curr > b){
                swap(arr[i],arr[hi]);
                hi--;
                i--;
            }
        }
    }
};
