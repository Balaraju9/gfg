class Solution {
  public:
    int maxSumIS(vector<int>& arr) {
       vector<int> v1=arr;
       int max1=0;
       for(int i=1;i<arr.size();i++){
           
            max1=0;
           for(int i1=0;i1<i;i1++){
               if(arr[i]>arr[i1]){
               max1=max(max1,v1[i1]);
               }
               
           }
           if(max1!=0){
           v1[i]=v1[i]+max1;
           }
           
       }
       max1=0;
       for(auto &i:v1){
          max1=max(max1,i);
       }
       return max1;
    }
};