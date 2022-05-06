class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        set<int> s;
        s.insert(a.begin() , a.end());
        bool t= a.size()!=s.size();
        
        return t;
        
    }
};