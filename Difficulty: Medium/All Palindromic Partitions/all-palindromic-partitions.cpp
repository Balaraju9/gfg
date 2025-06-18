class Solution {
  public:
    vector<vector<string>> palinParts(string &s) {
    vector<vector<string>> result;
    vector<string> current;

  
    auto isPalindrome = [](const string &str) {
        int l = 0, r = str.size() - 1;
        while (l < r) {
            if (str[l] != str[r]) return false;
            l++;
            r--;
        }
        return true;
    };

   
    function<void(int)> backtrack = [&](int start) {
        if (start >= s.size()) {
            result.push_back(current);
            return;
        }
        for (int end = start; end < s.size(); ++end) {
            string part = s.substr(start, end - start + 1);
            if (isPalindrome(part)) {
                current.push_back(part);
                backtrack(end + 1);
                current.pop_back();
            }
        }
    };

    backtrack(0);
    return result;
}

};