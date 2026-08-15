class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for(int i = 0; i < strs[0].length(); i++)
        {
            for(int j = 0; j < strs.size(); j++)
            {
                // If string is too short or characters don't match
                if(i >= strs[j].length() || strs[j][i] != strs[0][i])
                {
                    return ans;
                }
            }
            ans += strs[0][i];
        }
        return ans;
    }
};