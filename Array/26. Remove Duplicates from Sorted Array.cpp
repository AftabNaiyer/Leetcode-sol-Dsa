
Runtime: 31 ms, faster than 14.67% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 18.3 MB, less than 74.61% of C++ online submissions for Remove Duplicates from Sorted Array.


//-------------------------Solution in cpp------------------------//



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;
        
        int last = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[last]) {
                ++last;
                nums[last] = nums[i];
            }
        }

        nums.resize(last+1);
        return nums.size();
    }
};