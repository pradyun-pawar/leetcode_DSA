class Solution(object):
    def mostWordsFound(self, sentences):
        length=len(sentences)
        i=0
        result=0
        while(i<length):
            words=sentences[i].split(' ')
            new=len(words)
            result=max(result,new)
            i=i+1
        return result

        