class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<double>ans(n, 0.0);
        
        priority_queue<double>maxi;
        priority_queue<double, vector<double>, greater<double>>mini;
        
        for(int i=0; i<n; i++){
            if(!maxi.empty() && maxi.top()<arr[i]){
                mini.push(arr[i]);
            }else{
                maxi.push(arr[i]);
            }
            if (maxi.size() > mini.size() + 1) {  
                mini.push(maxi.top());
                maxi.pop();
            } else if (mini.size() > maxi.size()) {
                maxi.push(mini.top());
                mini.pop();
            }
            if(i%2==0){
                ans[i]=maxi.top();
            }else{
                ans[i]=(maxi.top()+mini.top())/2.0;
            }
        }
        return ans;
    }
};
