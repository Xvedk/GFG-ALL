class Solution {
  public:
    string minSum(vector<int> &arr) {
        
        int n=arr.size();
     sort(arr.begin(),arr.end());
        vector<int>v1;
        for(int i=0;i<n;i++){
            if(i%2!=0){
                v1.push_back(arr[i]);
                
            }
        }
           vector<int>v2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                v2.push_back(arr[i]);
               
                
            }
        }
        
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        vector<int>ans;
        int i=0;
        int j=0;
        int carry=0;
        while(i<v1.size() && j<v2.size()){
            long long sum=v1[i]+v2[j]+carry;
            int digit=sum%10;
            ans.push_back(digit);
            carry=sum/10;
            i++;
            j++;
        }
        while(i<v1.size()){
            long long sum=v1[i]+carry;
            int digit=sum%10;
            ans.push_back(digit);
            carry=sum/10;
            i++;
         
        }
            while(j<v2.size()){
            long long sum=v2[j]+carry;
            int digit=sum%10;
            ans.push_back(digit);
            carry=sum/10;
            
            j++;
        }
        if(carry!=0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
     
       string answer = "";

        int index = 0;
        while (index < ans.size() - 1 && ans[index] == 0) {
            index++;
        }

        for (int i = index; i < ans.size(); i++) {
            answer += to_string(ans[i]);
        }

        return answer.empty() ? "0" : answer;
    }
};
