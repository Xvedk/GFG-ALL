class Solution:
    def sumXOR(self, arr, n):
        result = 0

        for i in range(32):
            count_ones = 0
            for j in range(n):
                if (arr[j] & (1 << i)) != 0:
                    count_ones += 1

            count_zeros = n - count_ones

            result += (count_ones * count_zeros) << i

        return result
