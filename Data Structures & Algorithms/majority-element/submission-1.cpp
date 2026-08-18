class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxcnt = 0;
        int res;

        for(int i = 0; i < nums.size(); i++)
        {
            int cnt = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                    cnt++;

                if(cnt > maxcnt || (cnt == maxcnt && nums[i] >res))
                {
                    maxcnt = cnt;
                    res = nums[i];
                }
            }
        }
        return res;
    }
};