class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> us;

        for(int i = 0; i < nums.size(); i++)
        {
            us.insert(nums[i]);
        }
        if(us.size() != nums.size())
            return 1;
        else
            return 0;
    }
};