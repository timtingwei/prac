class Solution(object):
    def reverse(self,x):
        """

        :param x:int
        :return: int
        """
        # x = 123,return 321
        # x = -123,return -321
        """
        if x>=0:
            rev_x = list(str(x)).reverse()

            print (rev_x)
        """
        list_s = list(reversed(list(str(x))))
        print (list(list_s))
        if x<0:
            list_s = list_s[:len(list_s)-1]
        print (list_s)
        sum = 0
        for i in range(len(list_s)):
            sum = sum*10+int(list_s[i])

        print (sum)

s = Solution()
s.reverse(-1223)

class OtherSolution(object):
    def reverse(self,x):
        """

        :param x: int
        :return: int
        """
        s = 0
        if x<0:
            s = 1
            x = -x
        if x==0:
            return 0
        n = x
        num = []
        while n>0:
            num.append(n%10)
            n //=10
        sum = 0
        for j in range(len(num)):
            sum = sum*10+num[j]

        if sum>2147483647:
            return 0
        if (s==1):
            return -sum
        return sum

s2 = OtherSolution()
print (s2.reverse(-1234))


