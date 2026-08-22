class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> k;

        for(int i = 0; i < m; i++)
        {
            k.push_back(nums1[i]);
        }
        for(int i = 0; i < n; i++)
        {
            k.push_back(nums2[i]);
        }
        
        for(int i = 0; i < n+m; i++)
        {
            nums1[i] = k[i];
        }

        sort(nums1.begin(), nums1.end());

        return;
        
    }
};