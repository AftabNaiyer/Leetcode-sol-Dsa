Runtime: 2 ms, faster than 65.87% of Java online submissions for Maximum Subarray.
Memory Usage: 74.3 MB, less than 37.47% of Java online submissions for Maximum Subarray.


//-------------------------Solution in cpp------------------------//



class Solution {
    public int maxSubArray(int[] nums) {
       int result = nums[0];
       int sum = nums[0];
 
       for(int i=1; i<nums.length; i++){
          sum = Math.max(nums[i], sum + nums[i]);
          result = Math.max(result, sum);
       }
       return result;
    }
}