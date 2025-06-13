class Solution {
  public:
    bool fun(int mid,vector<int> &arr,int k){
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid){
                k--;
            }
            else if(arr[i]%mid==0){
                k=k-arr[i]/mid;
            }
            else {
                k=k-((arr[i]/mid )+1);
            }
            if(k<0) return false;
           
        }
       
        return true;
    }
    int kokoEat(vector<int>& arr, int k) {
       int l=1;
       int h=*max_element(arr.begin(),arr.end());
       while(l<=h){
           int mid=(l+h)/2;
           if(fun(mid,arr,k)){
               h=mid-1;
           }
           else{
               l=mid+1;
           }
       }
        return l;
    }
};