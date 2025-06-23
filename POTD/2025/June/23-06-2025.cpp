class Solution {
public:
    // Helper function to add two large numbers represented as strings
    string addStrings(string num1, string num2) {
        string result = "";
        int i = num1.length() - 1;  // Start from rightmost digit of num1
        int j = num2.length() - 1;  // Start from rightmost digit of num2
        int carry = 0;

        // Add digits from right to left, just like manual addition
        while (i >= 0 || j >= 0 || carry) {
            int n1 = (i >= 0) ? num1[i] - '0' : 0;  // Get digit or 0 if exhausted
            int n2 = (j >= 0) ? num2[j] - '0' : 0;  // Get digit or 0 if exhausted
            int sum = n1 + n2 + carry;
            
            carry = sum / 10;           // Calculate carry for next position
            result += (sum % 10) + '0'; // Append current digit as character
            i--;
            j--;
        }

        // Reverse the result since we built it backwards
        int left = 0, right = result.length() - 1;
        while (left < right) {
            char temp = result[left];
            result[left] = result[right];
            result[right] = temp;
            left++;
            right--;
        }

        // Remove leading zeros (keep at least one digit)
        int start = 0;
        while (start < result.length() - 1 && result[start] == '0') {
            start++;
        }
        
        // Build final result without leading zeros
        string finalResult = "";
        for (int k = start; k < result.length(); k++) {
            finalResult += result[k];
        }

        return finalResult;
    }
    
    string minSum(vector<int> &arr) {
        int n = arr.size();
        
        // Step 1: Sort the array to get smallest digits first
        sort(arr.begin(), arr.end());
        
        // Step 2: Create two strings for our two numbers
        string num1 = "";
        string num2 = "";
        
        // Step 3: Distribute digits optimally - take pairs and assign alternately
        for (int i = 0; i < n; i += 2) {
            // First digit of pair goes to num1
            char firstDigit = arr[i] + '0';  // Convert int to char
            if (i < n) {
                num1.push_back(firstDigit);
            }
            
            // Second digit of pair goes to num2 (if it exists)
            if ((i + 1) < n) {
                char secondDigit = arr[i + 1] + '0';  // Convert int to char
                num2.push_back(secondDigit);
            }
        }
        
        // Step 4: Add the two numbers using string addition
        return addStrings(num1, num2);
    }
};
