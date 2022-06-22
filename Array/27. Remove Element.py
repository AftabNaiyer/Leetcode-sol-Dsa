Runtime: 26 ms, faster than 63.52% of Python online submissions for Remove Element.
Memory Usage: 13.5 MB, less than 12.38% of Python online submissions for Remove Element.


//-------------------------Solution in cpp------------------------//



class Solution:
    def removeElement(self, nums, val):
        count = 0
        for i in range(len(nums)):
            if nums[i] != val :
                nums[count] = nums[i]
                count +=1
        return count