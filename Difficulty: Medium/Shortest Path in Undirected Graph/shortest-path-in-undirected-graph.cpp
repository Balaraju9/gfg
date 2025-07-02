class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        queue<pair<int,int>> q;
        unordered_map<int,int> mp;
      
    q.push({src,0});
    mp[src]=0;
    
      while(!q.empty()){
          auto pu=q.front();
          q.pop();
          vector<int> v1=adj[pu.first];
          for(auto &i:v1){
              if(mp.find(i)!=mp.end()){
                  if(mp[i]>pu.second+1){
                      q.push({i,pu.second+1});
                       mp[i]=pu.second+1;
                  }
                  
              }
              else{
                  q.push({i,pu.second+1});
                   mp[i]=pu.second+1;
                  
              }
          }
         
          
          
          
      }
      for(auto &i:mp){
          if(i.first==src){
              
          }
          else{
              if(i.second==0){
                 mp[i.first]=-1;
              }
          }
      }
      vector<int> ans(adj.size());
      for(int i=0;i<ans.size();i++){
      if(i==src){
          ans[i]=0;
      }
      else if(mp[i]==0){
          ans[i]=-1;
      }
      else{
          
          ans[i]=mp[i];
      }
      }
      return ans;
        
    }
};