class Solution:
    def sameFreq(self, s: str) -> bool:
        #code here
        # if length of strig is 1, result is always 'True' 
        if len(s) <= 1:
            return True
        # generate set of characters in s
        set_s = set(s)
        counts = []
        # Create array of counts of the characters in s 
        for ch in set_s:
            counts.append(s.count(ch))
        # sort the the counts  
        counts.sort()
        
        # check if all the counts are equal
        if counts[0] == counts[-1]:
            return True
        
        # check if all the counts except last are equal and last one is just 1 more
        if counts[-1] - 1 == counts[-2] and counts[-2] == counts[0]:
            return True
         
        # check if all the counts except first one are equal and the first one is 1   
        if counts[0] == 1 and counts[1] == counts[-1]:
            return True

        return False
