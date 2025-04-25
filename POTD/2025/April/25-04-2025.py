class Solution:
    def majorityElement(self, arr):
        #code here
        new = -1
        freq = {}
        for i in arr:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
        for i,count in freq.items():
            if count > (len(arr)/2):
                new = i
            
        return new
