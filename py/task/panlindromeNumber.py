#panlindromeNumber.py

class Solution(object):
    def isPalindrome(self,x):
        """
        Determine whether an integer is a palindrome. Do this without extra space.
        :param x:int
        :return: bool
        """
        n = str(x)
        for i in range(len(n)//2):
            if n[i]!=n[-(i+1)]:
                return False
            continue
        return True

s = Solution()
print (s.isPalindrome(12344321))