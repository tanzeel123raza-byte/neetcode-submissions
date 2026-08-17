class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return 0;
        map<char, int> se;
        map<char, int> te;

        for(int i = 0; i < s.size(); i++)
        {
            se[s[i]]++;
            te[t[i]]++;
        }
        return se == te;
    }
};
