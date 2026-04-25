class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int j=0,i=0,s=0;
        // sort(arr.begin(),arr.end());
        vector<int> v1;
        while(j<arr.size()){
            s+=arr[j];
            while(s>target){
                s=s-arr[i];
                i++;
                
            }
            if(s==target){
                for(int pu=i;pu<=j;pu++){
                    v1.push_back(pu);
                }
                if(v1.size()==1){
                    v1.push_back(v1[0]);
                }
                break;
            }
            j++;
        }
        if(v1.size()<=1){
            return {-1};
        }
        return {v1[0]+1,v1[v1.size()-1]+1};
    }
};