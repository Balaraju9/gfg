class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> s;
        for (int num : a) s.insert(num);
        for (int num : b) s.insert(num);

        vector<int> result(s.begin(), s.end());
        return result;
    }
};
