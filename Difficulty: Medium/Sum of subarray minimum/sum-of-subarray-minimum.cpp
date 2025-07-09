class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
       stack<pair<int,int>> st;
       vector<int> r(arr.size());
       vector<int> l(arr.size());
       
       for(int i=arr.size()-1;i>=0;i--){
           while(!st.empty() && st.top().first>=arr[i]){
               st.pop();
           }
           if(st.empty()){
               r[i]=arr.size()-i;
           }
           else{
               r[i]=st.top().second-i;
           }
           st.push({arr[i],i});
           
       }
       while(!st.empty()){
           st.pop();
       }
         for(int i=0;i<arr.size();i++){
           while(!st.empty() && st.top().first>arr[i]){
               st.pop();
           }
           if(st.empty()){
               l[i]=i+1;
           }
           else{
               l[i]=i-st.top().second;
           }
           st.push({arr[i],i});
           
       }
       int ans=0;
      for(int i=0;i<arr.size();i++){
          ans+=((arr[i])*(l[i]*r[i]));
      }
       return ans;
        
    }
};