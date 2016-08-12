#3Sum.py

class Solution(object):
    def threeSum(self,nums):
        """
        :example :S = [-1,0,1,2,-1,-4]
        :example Returns:
        [
            [-1,0,1]
            [-1,-1,2]
        ]

        :param nums: List[int]
        :return: List[List[int]]
        """
        group = []
        for i in range(len(nums)):
            for j in range(len(nums)):
                for k in range(len(nums)):
                    if (i!=j) and (j!=k) and (k!=i) and (nums[i]+nums[j]+nums[k])==0:
                        group.append([nums[i],nums[j],nums[k]])
        return [group]


s = Solution()
r = s.threeSum([-1,0,1,2,-1,-4])
print (r)

