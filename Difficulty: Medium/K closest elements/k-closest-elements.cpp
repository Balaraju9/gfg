class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
      auto k1 = lower_bound(arr.begin(), arr.end(), x);
      int k2 = k1 - arr.begin();
      vector<pair<int,int>> v1;
      
      if(k2 >= arr.size()){ // if x is greater than all
          k2 = arr.size() - 1;
      }
      
      // collect left side elements
      for(int i = k2 - 1; i >= 0; i--){
          v1.push_back({arr[i], abs(x - arr[i])});
      }
      
      // collect right side elements
      for(int i = k2; i < arr.size(); i++){
          v1.push_back({arr[i], abs(x - arr[i])});
      }
      
      // sort by difference first, if same diff, larger element first
      sort(v1.begin(), v1.end(), [](auto &a, auto &b){
          if(a.second == b.second) return a.first > b.first;
          return a.second < b.second;
      });
      
      vector<int> v2;
      for(auto &i : v1){
          if(i.first != x && v2.size() != k){
              v2.push_back(i.first);
          }
      }
      
      return v2;
    }
};
