/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        for(int i=0;i<gas.size();i++){
            gas[i]=gas[i]-cost[i];
        }
        int ans=0,s=0,s1=0;
        for(int i=0;i<gas.size();i++){
            s+=gas[i];
            s1+=gas[i];
            if(s1<0){
                ans=i+1;
                s1=0;
            }
            
            
        }
        if(s<0) return -1;
        return ans;
        
        
       
        
    }
};