class Solution {
  public:
    int countBuildings(vector<int> &height) {
        int ans=1;
        int num=height[0];
        for(int i=1;i<height.size();i++){
            
            if(height[i]>num){
                ans++;
                num=height[i];
            }
        }
        return ans;
    }
};
