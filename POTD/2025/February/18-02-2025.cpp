class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        vector<vector<int>>result;
        priority_queue<pair<int,int>>pq; // store {x^2 + y^2 , index} pairs
        int ind = 0;
        for(auto point : points) {
            int square = point[0] * point[0] + point[1] * point[1]; // calculate square
            pq.push({square , ind++}); // push {square,index} pairs
	    // pop from priority queue once >= k
            // max heap , removes highest squares
            while(pq.size() > k) {
                pq.pop();
            }
        }
        // pop remaining 'k' pairs from priority queue
	// push into result
        while(!pq.empty()) {
            auto top = pq.top();
            result.push_back(points[top.second]);
            pq.pop();
        }
        return result;
    }
};
