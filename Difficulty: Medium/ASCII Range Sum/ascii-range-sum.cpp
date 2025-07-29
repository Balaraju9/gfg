class Solution {
  public:
    vector<int> asciirange(string& s) {
     
    vector<int> number(s.size());
    int c=0;
    for(int i=0;i<s.size();i++){
        c+=s[i];
        number[i]=c;
        
    }
    unordered_map<char,vector<int>> mp;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])==mp.end()){
            mp[s[i]].push_back(i);
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(mp.find(s[i])!=mp.end() && mp[s[i]][0]<i && mp[s[i]].size()==1){
            mp[s[i]].push_back(i);
            
        }
    }
    // for(auto &i:number){
    //     cout<<i<<" ";
    // }
    vector<int> ans;
    for(auto &i:mp){
        char sul=i.first;
        vector<int> v1=i.second;
        if(v1[0]<v1[1]&& (number[v1[1]-1]-number[v1[0]])!=0){
            ans.push_back(number[v1[1]-1]-number[v1[0]]);
            
        }
        // cout<<sul<<" "<<v1[0]<<" "<<v1[1]<<"\n";
    }
       return ans;
    }
};