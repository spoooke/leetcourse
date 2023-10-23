class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n <= 0:
            return False

        # Check if it's a power of two
        if (n & (n - 1)) != 0:
            return False

        # Check if the only set bit is at an odd position (1-based index)
        return bin(n).count('0') % 2 == 1
