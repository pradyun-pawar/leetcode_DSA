class Solution(object):
    def checkIfPangram(self, sentence):
        unique=set(sentence)
        n=len(unique)
        if(n==26):
            return True
        else:
            return False
       