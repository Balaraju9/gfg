class Solution {
  public:
    int countStrings(string &s) {
        unordered_map<char,int> mp;
        int cur=0,s1=0;
        bool pu=false;
        for(int i=s.size()-1;i>=0;i--){
            int z=0;
            if(mp.find(s[i])!=mp.end()){
                z=mp[s[i]];
            }
            int z1=cur-z;
           
            s1+=z1;
           
            cur++;
            mp[s[i]]++;
            if(mp[s[i]]>1){
                pu=true;
            }
            
        }
        if(pu==true) s1++;
        
        return s1;
        
    }
};
