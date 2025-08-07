class Solution {
  public:
    int minDifference(vector<string> &arr) {
        vector<int> v1;
       
       for(int i=0;i<arr.size();i++){
           string s1=arr[i];
           string s2="";
           string h=s2+s1[0]+s1[1];
           s2="";
           string m=s2+s1[3]+s1[4];
           s2="";
           string s=s2+ s1[6]+s1[7];
           int h1=stoi(h);
           int m1=stoi(m);
           int s11=stoi(s);
           int hour=h1*60*60;
           int minu=m1*60;
           int sec=s11;
           int tot=hour+minu+sec;
           v1.push_back(tot);
       }
       sort(v1.begin(),v1.end());
       int min1=INT_MAX;
       for(int i=1;i<v1.size();i++){
           min1=min(min1,v1[i]-v1[i-1]);
           
       }
       if(v1.size()>1){
     min1 = min(v1[0] + (86400 - v1[v1.size() - 1]), min1);

       }
       return min1;
        
    }
};
