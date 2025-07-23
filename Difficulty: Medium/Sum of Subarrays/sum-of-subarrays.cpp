class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        int s=0;
      for(int i=0;i<arr.size();i++){
          s+=(arr[i]*(i+1)*(arr.size()-i));
      }
        return s;
    }
};