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
        string = ''
        for i in list_s:
            string += str(i)
        fina_s = int(string)
        print (fina_s)
s = Solution()
s.reverse(-1223)


"""
L = ['1','2','3']
l = reversed(L)
print (list(l))
print (list(str(123)))
"""