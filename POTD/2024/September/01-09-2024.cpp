int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        
        int n = arr1.size();
        int m = arr2.size();
        
        int sum = 0;
        int sum1 = 0, sum2 = 0;
        int i = 0, j = 0;
        while((i < n) && (j < m)) {
            if(arr1[i] < arr2[j]) {
                sum1 += arr1[i];
                i++;
            }
            else if(arr1[i] > arr2[j]) {
                sum2 += arr2[j];
                j++;
            }
            else {
                sum += max(sum1, sum2) + arr1[i];
                i++;
                j++;
                sum1 = 0;
                sum2 = 0;
            }
        }
        while(i < n) {
            sum1 += arr1[i];
            i++;
        }
        while(j < m) {
            sum2 += arr2[j];
            j++;
        }
        sum += max(sum1, sum2);
        return sum;
    }
