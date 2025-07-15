class Solution {
  public:
    bool divby13(string &s) {
        int mod=0;
      for(int i=0;i<s.size();i++){
           mod=mod*10+(s[i]-'0');
          mod=mod%13;
          
      }
      if(mod==0) return true;
      return false;
        
    }
};