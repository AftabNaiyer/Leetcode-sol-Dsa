Runtime: 4 ms, faster than 79.44% of C++ online submissions for Search Insert Position.
Memory Usage: 9.6 MB, less than 72.42% of C++ online submissions for Search Insert Position.



//-------------------------Solution in cpp------------------------//


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            if(nums[0]>=target){
                return 0;
            }
            if(nums[0]<target){
                return 1;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
            if(nums[i]>target){
                return i;
            }
        }
        return n;
    }
};