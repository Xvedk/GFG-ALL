void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = 1;
        
        while(i < j && j < n){
            if(arr[j] == 0) j++;
            else if(arr[i] != 0){
                i++;
                if(i == j) j++;
            }
            else if(arr[i] == 0){
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
        }
