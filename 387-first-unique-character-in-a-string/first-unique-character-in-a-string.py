class Solution(object):
    def firstUniqChar(self, s):
        for i in range(len(s)):
            if s[i] not in s[i+1:] and s[i] not in s[:i] :
                return i
        return -1
        