class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto &i:arr){
            mp[i*i]++;
        }
       for(int i=0;i<arr.size();i++){
           for(int j=i+1;j<arr.size();j++){
               if(mp.find(arr[i]*arr[i] + arr[j]* arr[j])!=mp.end()){
                   return true;
               }
           }
       }
       return false;
        
    }
};