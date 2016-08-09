class Solution(object):
    def lengthOfLongestSubstring(self,s):
        """

        :param s:str
        :return: int

        abcabcbb --> abc ,3  bbbbb-->b,1 pwwkew -->wke,3
        """
        s_list = list(s)
        i = 0
        while i<=len(s):
            if s_list[i] != s_list[i+1]:
                s_list.insert(i+1,'*')
                i = i+1
            i +=1
        string = ''
        for s in s_list:
            string +=s
        sp = string.split('*')
        count = [len(sp[i]) for i in range(len(sp))]
        print (count)
        index,temp = 0,0
        for i,k in enumerate(count):
            if k>temp:
                temp = k;index = i
        print ("'%s',length = %s"  %(sp[index],temp))

s = Solution()
s.lengthOfLongestSubstring('aaffffaaaaasssbbccd')
s.lengthOfLongestSubstring('159683522')
