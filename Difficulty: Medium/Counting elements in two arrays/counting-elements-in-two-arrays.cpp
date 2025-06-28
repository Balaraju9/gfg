class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        sort(b.begin(),b.end());
        vector<int> v1(a.size());
      
        for(int i=0;i<a.size();i++){
            auto i1=upper_bound(b.begin(),b.end(),a[i]);
            v1[i]=i1-b.begin();
            
            
        }
        
        return v1;
        
    }
};