class Solution(object):
    def differenceOfSum(self, nums):
        str_nums = [str(num) for num in nums]
        n=len(nums)
        addition=sum(nums)
        second=0

        for j in range(n):
            result=sum(int(digit) for digit in str_nums[j])
            second=second+result

        final=abs(addition-second)
        return final
        