class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) 
    {
        int totalCost = 0, totalGas = 0 , startIdx= 0, gasCnt = 0;
        
        for(int i = 0; i < cost.size(); i++)
        {
            totalCost += cost[i];
            totalGas += gas[i];
            gasCnt += gas[i] - cost[i];
            if(gasCnt < 0)
            {
                startIdx = i + 1;
                gasCnt = 0;
            }
        }// Your code here
        
        if(totalGas < totalCost)
            return -1;
        else
            return startIdx;
    }

};
