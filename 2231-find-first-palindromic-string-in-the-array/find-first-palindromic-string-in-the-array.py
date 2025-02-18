class Solution(object):
    def firstPalindrome(self, words):
        i=0
        n=len(words)
        m=""
        while(i<n):
            s=words[i]
            if(s==s[::-1]):
                return s
            i=i+1
        
        return m