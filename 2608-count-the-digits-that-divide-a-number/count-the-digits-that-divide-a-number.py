class Solution(object):
    def countDigits(self, num):
        converted=str(num)
        n=len(converted)
        i=0
        result=0
        while(i<n):
            back=int(converted[i])
            if(num%back==0):
                result=result+1
            i=i+1
        
        return result