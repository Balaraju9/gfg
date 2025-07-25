class Solution {
  public:
    int maxCircularSum(vector<int> &m) {
        // code here
        int max1=INT_MIN,s1=0;
        for(int i=0;i<m.size();i++){
            if(s1<0){
                s1=0;
            }
            s1+=m[i];
            max1=max(max1,s1);
        }
        int s=0,tot=0,min1=INT_MAX;
        for(int i=0;i<m.size();i++){
            if(s>0){
                s=0;
            }
            
                s+=m[i];
            
            min1=min(min1,s);
            tot+=m[i];
        }
       
      if(tot-min1==0){
          return max1;
      }
        
        return max(max1,tot-min1);
    }
};