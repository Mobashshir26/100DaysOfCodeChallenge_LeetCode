class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        for(int i = 0, j = 1; i < nums.size()-1; i++, j++)
        {
            if(nums[i] != nums[j])
            {
                return nums[i];
            }
            else
            {
                i++;
                j++;
            }
        }
        return nums[nums.size() - 1];
    }
};