class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        
        vector<int>answer;
        
        int i = 0, j=0;
        while(i < a.size() && j < b.size())
        {
            if(a[i] == b[j])
            {
                answer.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] <= b[j])
            {
                answer.push_back(a[i++]);
            }
            else if (b[j] < a[i])
            {
                answer.push_back(b[j++]);
            }
            else
            break;
        }
        
        
        if(i >= a.size() && j < b.size())
        {
            while(j < b.size())
            {
                answer.push_back(b[j++]);
            }
        }
        
        if(j >= b.size() && i < a.size())
        {
            while(i < a.size())
            {
                answer.push_back(a[i++]);
            }
        }
        
        return answer;
    }
};
