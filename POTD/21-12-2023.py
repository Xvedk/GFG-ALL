class Solution:
    def minCandy(self, N, ratings):
        if not ratings:
            return 0

        candies = [1] * N

        # Traverse from left to right, make sure right neighbor gets more candies if the rating is higher
        for i in range(1, N):
            if ratings[i] > ratings[i - 1]:
                candies[i] = candies[i - 1] + 1

        # Traverse from right to left, make sure left neighbor gets more candies if the rating is higher
        for i in range(N - 2, -1, -1):
            if ratings[i] > ratings[i + 1]:
                candies[i] = max(candies[i], candies[i + 1] + 1)

        return sum(candies)
