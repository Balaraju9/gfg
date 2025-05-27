class Solution {
  public:
    vector<int> leafNodes(vector<int>& p) {
       stack<int> st;
       vector<int> ans;
       st.push(p[0]);
       for(int i=1;i<p.size();i++){
           if(st.top()>p[i]){
               st.push(p[i]);
           }
           else{
               int c=0;
               int t=st.top();
               while(!st.empty() && p[i]>st.top()){
                   st.pop();
                   c++;
               }
               if(c>=2){
               ans.push_back(t);
               }
               st.push(p[i]);
           }
       }
       ans.push_back(st.top());
       return ans;
        
    }
};