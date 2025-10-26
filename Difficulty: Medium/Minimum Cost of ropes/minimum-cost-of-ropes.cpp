class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int,vector<int> , greater<int>> pq;
        for(auto &i:arr){
            pq.push(i);
        }
        int ans=0;
        while(!pq.empty() && pq.size()>1){
            int s1=pq.top();
            pq.pop();
            int s2=pq.top();
            pq.pop();
            ans+=(s1+s2);
            
          
            pq.push(s1+s2);
            
        }
        return ans;
        
    }
};