class Solution {
  public:
    string addStrings(string num1, string num2) {
        string result;
        int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            carry = sum / 10;
            result.push_back((sum % 10) + '0');
        }
        
        reverse(result.begin(), result.end());
        return result;
    }

    string minSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        string s1, s2;
        for (int i = 0; i < arr.size(); ++i) {
            if (i % 2 == 0)
                s1 += (arr[i] + '0');
            else
                s2 += (arr[i] + '0');
        }
        

        string ans = addStrings(s1, s2);
        string a1;
      int i=0;
      while(i<ans.size() && ans[i]=='0'){
          i++;
          
      }
      for(int j=i;j<ans.size();j++){
          a1+=ans[j];
      }
      return a1;
    }
};
