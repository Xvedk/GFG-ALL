 vector<int> findSplit(vector<int>& arr) {
        // code here
        vector<int> ans;

    int sum = accumulate(arr.begin(), arr.end(), 0);
    if (sum % 3 != 0) {
        ans={-1,-1};
        return ans; 
    }

    int t = sum / 3;
    int pre = 0;

    for (int i = 0; i < arr.size(); i++) {
        pre += arr[i];
        
        
        if (pre == t) {
            pre = 0;
            ans.push_back(i);
            
            if(ans.size() == 2 && i < arr.size()-1){
                return ans;
            }
        }
    }
    
    ans={-1,-1};
    return ans;

    }
