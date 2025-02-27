class Solution(object):
    def xorOperation(self, n, start):
        result=0
        med=0
        for i in range(n):
            med=start + 2*i
            result=result ^ med

        return result
        