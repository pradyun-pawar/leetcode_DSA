class Solution(object):
    def numberGame(self, nums):
        size=len(nums)
        nums.sort()
        for i in range(0,size,2):
            nums[i],nums[i+1]=nums[i+1],nums[i]
        return nums
        