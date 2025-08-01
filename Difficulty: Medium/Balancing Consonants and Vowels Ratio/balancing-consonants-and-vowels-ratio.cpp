class Solution {
  public:
    int fun(string s1){
        int i=0,j=s1.size()-1,c=0;
        while(i<j){
           if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'){
               c++;
               
           }
         if (s1[j] == 'a' || s1[j] == 'e' || s1[j] == 'i' || s1[j] == 'o' || s1[j] == 'u') {
    c++;
}

          i++;
          j--;


        }
        if(s1.size()&1){
               if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'){
               c++;
               
           }
        }
        return c;
        
    }
    int countBalanced(vector<string>& arr) {
       vector<int> vo(arr.size());
        vector<int> co(arr.size());
       for(int i=0;i<arr.size();i++){
            int c=fun(arr[i]);
            vo[i]=c;
            co[i]=arr[i].size()-c;
            
       }
       unordered_map<int,int> mp;
       int ans=0,s=0;
       for(int i=0;i<arr.size();i++){
           s=s+vo[i];
           s=s-co[i];
           if(s==0){
               ans++;
           }
           if(mp.find(s)!=mp.end()){
               ans+=mp[s];
           }
           mp[s]++;
           
       }
       return ans;
        
    }
};