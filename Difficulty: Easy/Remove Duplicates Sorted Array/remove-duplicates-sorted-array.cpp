class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> arr1;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                arr1.push_back(arr[i]);
            }
            mp[arr[i]]++;
            
        }
        return arr1;
    }
};