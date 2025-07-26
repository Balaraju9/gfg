class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
       unordered_map<int,int> mp;
       for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
       }
       int k=arr.size()/3;
      vector<int> v1;
      for(int i=0;i<arr.size();i++){
          if(mp[arr[i]]>k ){
              v1.push_back(arr[i]);
              mp[arr[i]]=-1;
              
          }
      }
      sort(v1.begin(),v1.end());
      return v1;
       
        
        
        
    }
       
};
