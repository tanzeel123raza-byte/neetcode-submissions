class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> up;

        for(int i = 0; i < nums.size(); i++)
        {
            int needed = target - nums[i];

            if(up.find(needed) != up.end()){
                return {up[needed], i};
            }
            up[nums[i]] = i;
        }
        return {};
    }
};
