class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // ek pehle hi aage le liya kyuki 0 index wala toh alreay unique hai aur agr i = 0 kr deta toh ye fir chalta nahi.
        int i = 1;
        for(int j = 1; j < nums.size(); j++)
        {
            if(nums[j] != nums[j-1])
            {
                nums[i++] = nums[j];
            }
        }
        return i;
    }
};