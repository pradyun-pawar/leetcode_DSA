class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        n=len(hours)
        i=0
        count=0
        while(i<n):
            if(hours[i]>=target):
                count=count+1
            i=i+1

        return count
        