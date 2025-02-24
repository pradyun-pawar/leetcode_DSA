class Solution(object):
    def sumOfMultiples(self, n):
        i=0
        sum=0
        while(i<=n):
            if(i%3==0):
                sum=sum+i
            elif(i%5==0):
                sum=sum+i
            elif(i%7==0):
                sum=sum+i
            i=i+1
        return sum
        