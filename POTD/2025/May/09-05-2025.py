from collections import defaultdict
class Solution:
    
    #Function to find the largest number after k swaps.
    def findMaximumNum(self, s, k):
        #code here
        
        s = list(map(int, s))
        ln = len(s)

        dc = defaultdict(set)

        for ind, num in enumerate(s):

            dc[num].add(ind)



        flag = True


        while flag:

            flag = False

            for i in range(ln):

                num = s[i]

                if num == 9:

                    continue

                for key in range(9, num, -1):

                    if dc[key]:

                        ind = max(dc[key])

                        if ind> i:

                            flag = True

                            s[i], s[ind] = s[ind], s[i]

                            dc[key].remove(ind)

                            dc[key].add(i)

                            dc[num].remove(i)

                            dc[num].add(ind)

                            k-=1

                            if k == 0:

                                return "".join(map(str,s))

                            break

        return "".join(map(str,s))
