class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
       stack<int> st;
       for(int i=arr.size()-2;i>=0;i--){
           while(!st.empty() && st.top()<arr[i]){
               st.pop();
           }
           st.push(arr[i]);
       }
       for(int i=arr.size()-1;i>=0;i--){
           while(!st.empty() && st.top()<=arr[i]){
               st.pop();
           }
           int t=arr[i];
           if(!st.empty()){
               arr[i]=st.top();
           }
           else{
               arr[i]=-1;
           }
           st.push(t);
          
       }
       return arr;
        
    }
};