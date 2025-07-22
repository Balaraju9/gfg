class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int sul=arr.size();
        set<int> st;
        for(auto &i:arr){
            st.insert(i);
        }
        int i=1;
        while(i<=sul){
            if(st.find(i)==st.end()){
                return i;
            }
            i++;
        }
        return arr.size()+1;
    }
};