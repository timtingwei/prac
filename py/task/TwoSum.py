#TwoSum.py

nums = [2,7,11,15]
target = 18


class Solution(object):
    def twoSum(self,nums,target):
        '''
        :type nums:List[int]
        :type target:int
        :rtype:List[int]
        :return:
        '''
        for i in nums:
            if not isinstance(i,int):
                raise TypeError('nums is not a intList!!')
        if not isinstance(target,int):
            raise TypeError('target is not a intList!')
        for i in range(len(nums)):
            for j in range(len(nums)):
                if nums[i]+nums[j] == target:
                    return [i,j] # how to print index in list

s = Solution()
print (s.twoSum(nums,target))
for i in range(len(nums)):
    print (nums[i])


#nums = [2,7,11,15]
#target = 18
#other pragraming
class Solution(object):
    def twoSum(self,nums,target):
        hashTable = {} #用字典把index和value反转，可以索引值得到序号
        for i in range(len(nums)):
            hashTable[nums[i]] = i #guess --> {2:0,7:1,11:2,15:3}
        print (hashTable) #{15: 3, 2: 0, 11: 2, 7: 1}
        #print (hashTable[1]) #gess -->1 Wrong
        print (hashTable[15]) #return 3
        for i in range(len(nums)):
            if target - nums[i] in hashTable and i != hashTable[target - nums[i]]: #比较value和index
                return [i,hashTable[target - nums[i]]] #return 之后从func退出

        return []

s = Solution()
print (s.twoSum(nums,target))


#return return之后从函数出来。不管后面是什么情况
def myType(n):
    if isinstance(n,str):
        return 0
    if isinstance(n,int):
        return 1
    return 2

try:
    n = [1]
    print (myType(n))
except IOError as e:
    print (e)
finally:
    print ('end')


#beta2.0
class Solution(object):
    def twoSum(self,nums,target):
        '''
        :type nums:List[int]
        :type target:int
        :rtype:List[int]
        :return:
        '''
        for i in nums:
            if not isinstance(i,int):
                raise TypeError('nums is not a intList!!')
        if not isinstance(target,int):
            raise TypeError('target is not a intList!')
        hashTable = {}
        for i in range(len(nums)):
            hashTable[nums[i]] = i #reverse

        for i in nums:
            for j in nums:
                if i+j == target:
                    return [hashTable[i],hashTable[j]] # how to print index in list

s = Solution()
print (s.twoSum(nums,target))

#beta2.0
class Solution(object):
    def twoSum(self,nums,target):
        '''
        :type nums:List[int]
        :type target:int
        :rtype:List[int]
        :return:
        '''
        for i in nums:
            if not isinstance(i,int):
                raise TypeError('nums is not a intList!!')
        if not isinstance(target,int):
            raise TypeError('target is not a intList!')
        hashTable = {}
        for i in range(len(nums)):
            hashTable[nums[i]] = i #reverse

        #不适用双重循环，用单层循环实现
        for i in range(len(nums)): #循环的index
            if target - nums[i] in hashTable and  i != hashTable[target - nums[i]]:    #在hashTable的key/value中？ key
                return [i,hashTable[target - nums[i]]]
        return []

s = Solution()
print (s.twoSum(nums,target))

d = {1:10,2:20,3:30,4:40}
if 1 in d:
    print ("key")
if 20 in d:
    print ("value")
#return key


#nums = [2,9,9,15]
#target = 18
class Solution(object):
    def twoSum(self,nums,target):
        '''
        :type nums:List[int]
        :type target:int
        :rtype:List[int]
        :return:
        '''
        for i in nums:
            if not isinstance(i,int):
                raise TypeError('nums is not a intList!!')
        if not isinstance(target,int):
            raise TypeError('target is not a intList!')
        hashTable = {}
        for i in range(len(nums)):
            hashTable[nums[i]] = i #reverse

        #不适用双重循环，用单层循环实现
        for i in nums: #循环value
            if target - i in hashTable and  hashTable[i] != hashTable[target - i]:    #在hashTable的key/value中？ key
                return [hashTable[i],hashTable[target - i]] #一个是list中的 一个是dict
        return []

s = Solution()
print (s.twoSum(nums,target))