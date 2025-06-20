class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        if(arr.size()%k!=0) return false;
        sort(arr.begin(),arr.end());
       for(int i=0;i<arr.size();i++){
              if (arr[i] == -1) continue; 
            int cur = arr[i];
       
           int j=i+1;
           arr[i]=-1;
           int c=1;
            while (j < arr.size() && c < k) {
                if (arr[j] == cur + 1) {
                    cur = arr[j];
                    arr[j] = -1;
                    c++;
                }
                j++;
            }

           if(c!=k ) return false;
           
       }
       return true;
        
    }
};

