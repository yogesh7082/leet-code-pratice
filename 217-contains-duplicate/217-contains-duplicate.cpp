class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
       unordered_map<int, int> m;
        int f = 0;
        for (int i = 0; i < a.size(); ++i) m[a[i]]++;
        for (auto it : m)
            if (it.second >= 2) return 1;
        return 0;
        
    }
};